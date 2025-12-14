#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
short var_3 = (short)8220;
int var_5 = 929679335;
unsigned long long int var_7 = 16379241419377082021ULL;
unsigned int var_10 = 2585522126U;
unsigned int var_11 = 3052684369U;
int zero = 0;
long long int var_12 = 5085772357239872647LL;
unsigned char var_13 = (unsigned char)82;
long long int var_14 = -6399920235322265630LL;
void init() {
}

void checksum() {
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
