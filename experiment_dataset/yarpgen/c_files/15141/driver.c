#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
short var_2 = (short)-23215;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 4759123213058723141ULL;
unsigned int var_7 = 1888445784U;
unsigned int var_8 = 61043406U;
unsigned short var_10 = (unsigned short)63270;
unsigned short var_11 = (unsigned short)63978;
int zero = 0;
long long int var_12 = -4601277400580217184LL;
unsigned short var_13 = (unsigned short)54446;
signed char var_14 = (signed char)-90;
unsigned short var_15 = (unsigned short)31464;
unsigned int var_16 = 4180101554U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
