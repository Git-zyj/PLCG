#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1223848703U;
signed char var_1 = (signed char)55;
unsigned char var_3 = (unsigned char)251;
signed char var_5 = (signed char)36;
short var_6 = (short)897;
short var_7 = (short)-12950;
unsigned short var_9 = (unsigned short)20026;
int zero = 0;
int var_10 = 1833115602;
signed char var_11 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
