#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6733;
unsigned long long int var_7 = 7112717963365201384ULL;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)58;
int zero = 0;
signed char var_15 = (signed char)103;
unsigned char var_16 = (unsigned char)254;
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
