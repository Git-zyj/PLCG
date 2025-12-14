#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)78;
signed char var_3 = (signed char)-95;
long long int var_8 = 5225953543560618042LL;
long long int var_10 = -1649989707386657065LL;
unsigned char var_12 = (unsigned char)17;
unsigned char var_13 = (unsigned char)67;
int zero = 0;
signed char var_14 = (signed char)32;
signed char var_15 = (signed char)33;
short var_16 = (short)-26974;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
