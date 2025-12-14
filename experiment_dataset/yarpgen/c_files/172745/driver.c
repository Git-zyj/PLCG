#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
_Bool var_6 = (_Bool)0;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)49;
unsigned long long int var_17 = 5159872243467341015ULL;
unsigned char var_18 = (unsigned char)92;
unsigned short var_19 = (unsigned short)19280;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
