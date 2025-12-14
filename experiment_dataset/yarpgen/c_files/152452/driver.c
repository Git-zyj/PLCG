#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)58;
long long int var_3 = -6984983847827280236LL;
short var_4 = (short)-10988;
long long int var_7 = 2420041774584399546LL;
unsigned char var_9 = (unsigned char)51;
int zero = 0;
unsigned short var_12 = (unsigned short)7482;
signed char var_13 = (signed char)51;
signed char var_14 = (signed char)37;
unsigned int var_15 = 1536612967U;
void init() {
}

void checksum() {
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
