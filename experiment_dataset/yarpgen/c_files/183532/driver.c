#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49548;
unsigned int var_13 = 3061358757U;
long long int var_15 = -6915418099653289364LL;
int zero = 0;
long long int var_20 = 7124870169743094609LL;
short var_21 = (short)-1451;
signed char var_22 = (signed char)16;
unsigned int var_23 = 3994590127U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
