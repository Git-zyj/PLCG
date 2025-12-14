#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)39;
short var_6 = (short)-10439;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)48145;
int zero = 0;
unsigned char var_11 = (unsigned char)237;
unsigned short var_12 = (unsigned short)30699;
unsigned long long int var_13 = 10240392922343254746ULL;
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
