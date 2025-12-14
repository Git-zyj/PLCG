#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16929;
long long int var_2 = -1810434886838232218LL;
unsigned short var_6 = (unsigned short)42103;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 14815133167530101624ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
