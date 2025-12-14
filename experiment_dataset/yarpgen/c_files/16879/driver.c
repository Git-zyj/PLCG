#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-30344;
unsigned short var_3 = (unsigned short)27368;
signed char var_6 = (signed char)21;
int var_11 = 714510210;
int var_14 = -318545599;
int zero = 0;
long long int var_16 = 801051402793164502LL;
signed char var_17 = (signed char)64;
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
