#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47741;
int var_3 = -650861158;
signed char var_5 = (signed char)43;
signed char var_6 = (signed char)48;
signed char var_9 = (signed char)109;
long long int var_10 = -5871959379950531679LL;
unsigned short var_13 = (unsigned short)42307;
unsigned char var_14 = (unsigned char)100;
_Bool var_16 = (_Bool)0;
unsigned short var_19 = (unsigned short)1732;
int zero = 0;
unsigned char var_20 = (unsigned char)224;
unsigned int var_21 = 1138305997U;
unsigned char var_22 = (unsigned char)217;
short var_23 = (short)20261;
short var_24 = (short)-12374;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
