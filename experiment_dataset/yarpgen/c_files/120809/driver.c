#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -610711067;
unsigned long long int var_6 = 4036958864434879692ULL;
signed char var_8 = (signed char)-99;
signed char var_12 = (signed char)-94;
unsigned long long int var_15 = 7539073694175908929ULL;
int zero = 0;
short var_17 = (short)18047;
short var_18 = (short)7518;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
