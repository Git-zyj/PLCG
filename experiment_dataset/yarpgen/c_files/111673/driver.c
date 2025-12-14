#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 726100595U;
signed char var_3 = (signed char)108;
int zero = 0;
signed char var_10 = (signed char)-95;
short var_11 = (short)-2167;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)42526;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
