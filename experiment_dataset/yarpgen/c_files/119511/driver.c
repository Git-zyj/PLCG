#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)4;
signed char var_3 = (signed char)-122;
short var_4 = (short)-15653;
signed char var_6 = (signed char)24;
unsigned short var_7 = (unsigned short)542;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)3;
unsigned int var_12 = 1712329204U;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)251;
unsigned int var_18 = 1845010052U;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
unsigned int var_20 = 3441446226U;
unsigned short var_21 = (unsigned short)27911;
long long int var_22 = -3538280676936004000LL;
void init() {
}

void checksum() {
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
