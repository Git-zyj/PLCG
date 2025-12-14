#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44217;
unsigned char var_2 = (unsigned char)64;
signed char var_3 = (signed char)97;
unsigned int var_4 = 2752991998U;
unsigned short var_5 = (unsigned short)46026;
_Bool var_7 = (_Bool)1;
unsigned int var_12 = 2117976233U;
unsigned long long int var_13 = 9221927542639445367ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)48;
unsigned char var_19 = (unsigned char)202;
short var_20 = (short)1973;
unsigned char var_21 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
