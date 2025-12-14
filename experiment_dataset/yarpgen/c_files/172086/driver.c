#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)41;
int var_3 = -1716145320;
unsigned char var_5 = (unsigned char)69;
signed char var_6 = (signed char)-64;
_Bool var_7 = (_Bool)1;
int var_9 = 237305194;
unsigned int var_12 = 2741961512U;
signed char var_13 = (signed char)105;
int zero = 0;
signed char var_15 = (signed char)49;
unsigned int var_16 = 344306499U;
short var_17 = (short)-9354;
short var_18 = (short)1944;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
