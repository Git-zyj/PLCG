#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = -92257019;
_Bool var_13 = (_Bool)1;
int var_15 = 336173745;
long long int var_16 = 4223459938707707400LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)91;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)168;
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
