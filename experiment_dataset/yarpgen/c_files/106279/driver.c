#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15763160563190772751ULL;
unsigned short var_1 = (unsigned short)42325;
unsigned char var_8 = (unsigned char)179;
unsigned short var_13 = (unsigned short)46979;
signed char var_14 = (signed char)-91;
unsigned char var_16 = (unsigned char)219;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)107;
unsigned int var_19 = 1212828900U;
signed char var_20 = (signed char)25;
unsigned int var_21 = 3938680061U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
