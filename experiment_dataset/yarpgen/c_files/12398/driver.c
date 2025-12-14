#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 84341816969755628ULL;
int var_2 = -1844336374;
int var_8 = -1979817779;
unsigned short var_9 = (unsigned short)39694;
unsigned int var_12 = 4244394488U;
int zero = 0;
short var_15 = (short)12325;
signed char var_16 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
