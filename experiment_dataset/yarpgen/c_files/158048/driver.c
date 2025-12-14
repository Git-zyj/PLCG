#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4436;
unsigned int var_2 = 3975773200U;
int var_6 = -1463655884;
signed char var_7 = (signed char)-18;
unsigned char var_9 = (unsigned char)133;
unsigned int var_10 = 4192138645U;
int var_11 = 1242374446;
long long int var_12 = -7089491192383451796LL;
unsigned int var_13 = 4136735716U;
int zero = 0;
unsigned long long int var_17 = 13180252742301587007ULL;
unsigned long long int var_18 = 12523707547329818791ULL;
signed char var_19 = (signed char)69;
short var_20 = (short)27150;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
