#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)107;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1443787765U;
unsigned short var_9 = (unsigned short)13243;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-100;
int zero = 0;
unsigned long long int var_14 = 16930904590970130612ULL;
unsigned char var_15 = (unsigned char)53;
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
