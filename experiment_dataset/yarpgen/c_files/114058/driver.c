#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1355698112U;
unsigned char var_4 = (unsigned char)23;
signed char var_5 = (signed char)47;
unsigned char var_8 = (unsigned char)22;
short var_9 = (short)27873;
int zero = 0;
signed char var_11 = (signed char)-32;
unsigned int var_12 = 3312313190U;
unsigned short var_13 = (unsigned short)2899;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
