#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)23587;
unsigned int var_4 = 2297627692U;
unsigned short var_5 = (unsigned short)49561;
unsigned int var_7 = 3482026477U;
unsigned char var_8 = (unsigned char)14;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)73;
unsigned short var_11 = (unsigned short)4830;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 588343219U;
signed char var_14 = (signed char)107;
unsigned long long int var_15 = 1958595899569578096ULL;
int zero = 0;
signed char var_19 = (signed char)-13;
signed char var_20 = (signed char)-116;
unsigned char var_21 = (unsigned char)93;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)55085;
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
