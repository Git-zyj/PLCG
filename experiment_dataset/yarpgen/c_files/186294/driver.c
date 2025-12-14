#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)43;
short var_2 = (short)-27317;
unsigned int var_3 = 2237510089U;
unsigned long long int var_4 = 8166330174992010561ULL;
unsigned int var_6 = 2412209561U;
long long int var_7 = -5613726610192849620LL;
unsigned int var_8 = 431012408U;
short var_11 = (short)21629;
unsigned long long int var_14 = 4932842475572313943ULL;
unsigned char var_15 = (unsigned char)169;
int zero = 0;
unsigned int var_18 = 241365961U;
short var_19 = (short)31054;
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
