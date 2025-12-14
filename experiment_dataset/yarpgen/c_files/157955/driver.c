#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2190871082U;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-86;
short var_4 = (short)9479;
unsigned char var_5 = (unsigned char)0;
short var_8 = (short)-29020;
int zero = 0;
int var_11 = -163182471;
short var_12 = (short)-24109;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
