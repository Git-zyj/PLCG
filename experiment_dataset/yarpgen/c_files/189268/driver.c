#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9434;
unsigned int var_3 = 4080688036U;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-4;
signed char var_7 = (signed char)-81;
unsigned short var_8 = (unsigned short)7843;
unsigned int var_11 = 717341116U;
unsigned int var_12 = 3287363188U;
unsigned char var_13 = (unsigned char)29;
int zero = 0;
unsigned char var_14 = (unsigned char)125;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-89;
signed char var_17 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
