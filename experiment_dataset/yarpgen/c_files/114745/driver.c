#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49867;
int var_2 = 1956632514;
int var_4 = -909986092;
unsigned char var_7 = (unsigned char)82;
unsigned int var_8 = 728281941U;
unsigned char var_9 = (unsigned char)140;
signed char var_10 = (signed char)7;
unsigned long long int var_11 = 7798623746731417614ULL;
long long int var_13 = -7456783024800300960LL;
signed char var_14 = (signed char)77;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-8915;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 3447365684U;
_Bool var_20 = (_Bool)1;
long long int var_21 = 6070012480418834871LL;
int var_22 = 313193150;
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
