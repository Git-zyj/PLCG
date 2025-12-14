#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1876355223;
long long int var_2 = -807157009481585695LL;
int var_3 = -441030769;
unsigned int var_6 = 1677344827U;
int zero = 0;
unsigned short var_11 = (unsigned short)63154;
int var_12 = 743140890;
unsigned int var_13 = 4179728493U;
unsigned short var_14 = (unsigned short)30817;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
