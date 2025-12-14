#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2424821740260377798ULL;
unsigned int var_1 = 248344526U;
unsigned long long int var_4 = 16557492846233065358ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)6039;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
