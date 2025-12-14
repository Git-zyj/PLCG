#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32419;
unsigned int var_2 = 1657301991U;
unsigned char var_10 = (unsigned char)236;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)11622;
unsigned short var_21 = (unsigned short)18366;
unsigned int var_22 = 719022270U;
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
