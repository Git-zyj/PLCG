#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 748445067U;
signed char var_1 = (signed char)-122;
short var_5 = (short)21809;
unsigned char var_6 = (unsigned char)144;
signed char var_9 = (signed char)-114;
unsigned int var_10 = 1206378265U;
int var_11 = 1552399829;
int zero = 0;
short var_12 = (short)9854;
long long int var_13 = 2474717261989446714LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
