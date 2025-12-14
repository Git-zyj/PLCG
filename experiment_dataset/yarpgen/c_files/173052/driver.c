#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)14616;
unsigned long long int var_5 = 3236215907243078270ULL;
unsigned char var_9 = (unsigned char)69;
unsigned long long int var_11 = 12302921433024732267ULL;
unsigned long long int var_12 = 12026432929079825185ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)34245;
unsigned char var_17 = (unsigned char)105;
int zero = 0;
unsigned char var_18 = (unsigned char)111;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
