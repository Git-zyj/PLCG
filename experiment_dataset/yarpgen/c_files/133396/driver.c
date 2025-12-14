#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned short var_1 = (unsigned short)56898;
int var_5 = -1769359082;
unsigned short var_8 = (unsigned short)21059;
long long int var_12 = -3186311829536106858LL;
int zero = 0;
short var_13 = (short)-13637;
signed char var_14 = (signed char)97;
unsigned short var_15 = (unsigned short)34090;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
