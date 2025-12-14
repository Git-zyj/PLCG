#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -8156736882368345302LL;
int var_14 = -15253489;
int zero = 0;
long long int var_15 = 8171085131140959383LL;
unsigned char var_16 = (unsigned char)111;
_Bool var_17 = (_Bool)1;
long long int var_18 = 2762151575774241297LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
