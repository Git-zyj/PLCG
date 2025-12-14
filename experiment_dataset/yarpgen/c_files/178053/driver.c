#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33940;
_Bool var_10 = (_Bool)1;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_17 = (short)30205;
unsigned char var_18 = (unsigned char)217;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
