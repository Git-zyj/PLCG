#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5615803897356819706LL;
short var_3 = (short)-24802;
unsigned long long int var_8 = 12178031528194077700ULL;
short var_9 = (short)26792;
unsigned short var_10 = (unsigned short)31063;
int zero = 0;
int var_11 = 400289470;
int var_12 = -852786801;
unsigned short var_13 = (unsigned short)37582;
signed char var_14 = (signed char)-95;
int var_15 = -331393579;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
