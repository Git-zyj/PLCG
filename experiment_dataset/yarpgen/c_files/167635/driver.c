#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)586;
_Bool var_2 = (_Bool)1;
long long int var_3 = 2594914248091155862LL;
unsigned char var_6 = (unsigned char)83;
signed char var_7 = (signed char)33;
signed char var_10 = (signed char)-119;
unsigned short var_13 = (unsigned short)60756;
int zero = 0;
unsigned char var_14 = (unsigned char)29;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
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
