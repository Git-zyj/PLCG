#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1351071521;
int var_5 = 1462272464;
unsigned long long int var_7 = 17714474179701349956ULL;
unsigned short var_11 = (unsigned short)19728;
unsigned short var_15 = (unsigned short)2883;
int zero = 0;
long long int var_16 = 1879352524566069012LL;
short var_17 = (short)12546;
void init() {
}

void checksum() {
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
