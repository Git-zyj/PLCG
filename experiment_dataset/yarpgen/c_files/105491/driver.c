#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2355321844601412232ULL;
unsigned long long int var_3 = 8153454264029124625ULL;
unsigned long long int var_4 = 10250774646873609417ULL;
_Bool var_6 = (_Bool)0;
int var_8 = -1877819069;
unsigned int var_10 = 1741243930U;
unsigned int var_12 = 28759102U;
short var_13 = (short)31426;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)236;
void init() {
}

void checksum() {
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
