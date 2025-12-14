#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7436;
unsigned int var_2 = 1215288204U;
int var_6 = 1284611176;
unsigned short var_9 = (unsigned short)33718;
short var_10 = (short)-20257;
signed char var_14 = (signed char)92;
unsigned char var_15 = (unsigned char)109;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_20 = (short)7284;
unsigned short var_21 = (unsigned short)3828;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
