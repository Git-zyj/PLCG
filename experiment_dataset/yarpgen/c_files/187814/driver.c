#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)4675;
unsigned int var_4 = 3160646942U;
unsigned short var_13 = (unsigned short)34029;
int zero = 0;
long long int var_20 = -2038902558154876306LL;
signed char var_21 = (signed char)102;
unsigned short var_22 = (unsigned short)29563;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
