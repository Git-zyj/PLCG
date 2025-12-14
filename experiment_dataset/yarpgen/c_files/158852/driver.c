#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2851667290158551188ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_12 = (unsigned short)2258;
int zero = 0;
unsigned long long int var_16 = 7199608609934429622ULL;
unsigned long long int var_17 = 17297046791447443017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
