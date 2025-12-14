#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1674876887;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)44574;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 11366512926620185155ULL;
short var_13 = (short)6890;
int var_15 = -1046872089;
unsigned short var_16 = (unsigned short)43759;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 27850129U;
unsigned char var_21 = (unsigned char)215;
unsigned short var_22 = (unsigned short)30065;
short var_23 = (short)-20782;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
