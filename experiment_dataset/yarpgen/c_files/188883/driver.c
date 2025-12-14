#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)69;
long long int var_4 = -1965226334854884712LL;
unsigned int var_6 = 3963530458U;
signed char var_9 = (signed char)82;
unsigned char var_16 = (unsigned char)77;
int zero = 0;
unsigned int var_17 = 2239144487U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
