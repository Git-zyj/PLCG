#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)35043;
unsigned long long int var_8 = 2128720402079585616ULL;
unsigned short var_11 = (unsigned short)61012;
int var_12 = -1782164780;
long long int var_14 = -2799628387060799346LL;
unsigned short var_16 = (unsigned short)36014;
int zero = 0;
unsigned int var_18 = 2200668187U;
unsigned int var_19 = 3995214974U;
long long int var_20 = -1890307959763497741LL;
short var_21 = (short)-1666;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
