#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)140;
unsigned long long int var_13 = 7713067207720643784ULL;
unsigned int var_14 = 375847338U;
unsigned char var_15 = (unsigned char)195;
unsigned long long int var_16 = 2056621224310659844ULL;
int zero = 0;
short var_19 = (short)-17142;
unsigned int var_20 = 1053593475U;
short var_21 = (short)13281;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
