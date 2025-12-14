#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3513467688234051785LL;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)60255;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)215;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)-32310;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
