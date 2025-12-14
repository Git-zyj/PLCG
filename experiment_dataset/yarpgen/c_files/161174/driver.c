#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2688409872246686445LL;
signed char var_6 = (signed char)9;
long long int var_9 = -2873539356858663001LL;
unsigned short var_10 = (unsigned short)13611;
short var_13 = (short)569;
unsigned long long int var_14 = 440599197215040399ULL;
unsigned char var_18 = (unsigned char)16;
int zero = 0;
int var_19 = 1625545300;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1552819143U;
void init() {
}

void checksum() {
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
