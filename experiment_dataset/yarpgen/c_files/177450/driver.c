#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)89;
unsigned int var_9 = 1946762308U;
unsigned short var_10 = (unsigned short)27797;
unsigned char var_11 = (unsigned char)122;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4072931376U;
int zero = 0;
unsigned char var_14 = (unsigned char)226;
unsigned int var_15 = 544004860U;
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
