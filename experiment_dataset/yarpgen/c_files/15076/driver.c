#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)254;
signed char var_4 = (signed char)-109;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
short var_7 = (short)4641;
long long int var_8 = -3234852860798559080LL;
short var_9 = (short)27750;
long long int var_10 = -876487555167970992LL;
short var_12 = (short)-11731;
unsigned int var_13 = 1231881602U;
int zero = 0;
long long int var_14 = -5018805797600754892LL;
signed char var_15 = (signed char)-13;
int var_16 = -63402206;
void init() {
}

void checksum() {
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
