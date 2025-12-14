#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 14903265072250516809ULL;
unsigned char var_12 = (unsigned char)103;
unsigned int var_16 = 1008638034U;
int zero = 0;
int var_18 = -364126423;
unsigned short var_19 = (unsigned short)54245;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
