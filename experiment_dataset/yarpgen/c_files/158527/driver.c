#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 331338614485681209LL;
unsigned long long int var_1 = 14963268370843086629ULL;
signed char var_2 = (signed char)69;
int var_3 = 1249108173;
unsigned char var_4 = (unsigned char)97;
long long int var_5 = -3840650743932093218LL;
unsigned long long int var_6 = 894588876445051749ULL;
int var_8 = -325727063;
_Bool var_9 = (_Bool)0;
long long int var_11 = 2795221159807235170LL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-24962;
unsigned short var_15 = (unsigned short)24448;
unsigned int var_16 = 422342126U;
int zero = 0;
unsigned char var_18 = (unsigned char)105;
signed char var_19 = (signed char)-115;
unsigned char var_20 = (unsigned char)209;
unsigned char var_21 = (unsigned char)50;
signed char var_22 = (signed char)6;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
