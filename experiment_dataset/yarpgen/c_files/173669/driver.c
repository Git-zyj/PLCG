#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
short var_4 = (short)25430;
long long int var_8 = -449258885374847586LL;
short var_12 = (short)12045;
unsigned long long int var_13 = 18351335174538474408ULL;
short var_14 = (short)-5949;
int var_16 = 723345249;
int zero = 0;
short var_17 = (short)-27504;
signed char var_18 = (signed char)4;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
