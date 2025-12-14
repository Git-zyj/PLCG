#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 269592730U;
signed char var_2 = (signed char)-72;
signed char var_3 = (signed char)23;
signed char var_4 = (signed char)54;
unsigned char var_5 = (unsigned char)83;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)41346;
unsigned int var_8 = 3875688563U;
unsigned char var_9 = (unsigned char)103;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)16772;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-9253;
unsigned char var_14 = (unsigned char)186;
unsigned long long int var_15 = 11536694646299897996ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
