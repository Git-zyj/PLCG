#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2683018589U;
unsigned short var_2 = (unsigned short)23313;
short var_3 = (short)12529;
unsigned long long int var_4 = 3269925479585503034ULL;
unsigned int var_5 = 371378076U;
int var_6 = -751583810;
unsigned long long int var_8 = 4813997332185849217ULL;
unsigned char var_11 = (unsigned char)75;
unsigned int var_15 = 1342656812U;
unsigned char var_16 = (unsigned char)174;
int zero = 0;
unsigned long long int var_17 = 10781633001580850822ULL;
signed char var_18 = (signed char)-35;
unsigned int var_19 = 1081818294U;
short var_20 = (short)-7153;
unsigned char var_21 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
