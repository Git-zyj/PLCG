#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23488;
unsigned short var_1 = (unsigned short)13905;
signed char var_2 = (signed char)32;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1883769575U;
int var_5 = -1309076766;
unsigned int var_6 = 3535361756U;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)187;
signed char var_10 = (signed char)46;
unsigned short var_11 = (unsigned short)62459;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)151;
int zero = 0;
int var_17 = 1775780946;
signed char var_18 = (signed char)-13;
unsigned short var_19 = (unsigned short)4737;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
