#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 964988751;
long long int var_4 = 5735296299430893678LL;
unsigned short var_5 = (unsigned short)5415;
unsigned char var_11 = (unsigned char)20;
unsigned int var_14 = 1980486569U;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-55;
short var_20 = (short)26528;
unsigned char var_21 = (unsigned char)158;
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
