#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12704;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
long long int var_6 = 6086185935005879831LL;
signed char var_8 = (signed char)-40;
unsigned int var_9 = 2246382613U;
unsigned short var_10 = (unsigned short)58507;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)9779;
signed char var_14 = (signed char)51;
unsigned char var_15 = (unsigned char)6;
void init() {
}

void checksum() {
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
