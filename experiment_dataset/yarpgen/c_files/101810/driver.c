#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15237;
signed char var_1 = (signed char)48;
unsigned long long int var_11 = 4721892153938426254ULL;
unsigned long long int var_12 = 14528221545408171395ULL;
int zero = 0;
signed char var_15 = (signed char)12;
unsigned short var_16 = (unsigned short)36946;
long long int var_17 = -6836074458356330287LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
