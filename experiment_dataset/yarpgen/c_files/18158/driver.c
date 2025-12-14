#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)32478;
unsigned int var_2 = 3907811296U;
int var_4 = 1679092971;
short var_5 = (short)-23789;
signed char var_6 = (signed char)125;
int zero = 0;
long long int var_13 = -6814767143402193474LL;
unsigned int var_14 = 661796718U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
