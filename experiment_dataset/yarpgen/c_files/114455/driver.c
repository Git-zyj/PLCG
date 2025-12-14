#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_8 = (unsigned char)85;
unsigned char var_9 = (unsigned char)110;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)110;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2979244948U;
unsigned char var_18 = (unsigned char)100;
int zero = 0;
unsigned int var_20 = 2296330682U;
unsigned char var_21 = (unsigned char)75;
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
