#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11702;
unsigned char var_3 = (unsigned char)20;
unsigned long long int var_4 = 17910485000262978745ULL;
unsigned char var_15 = (unsigned char)56;
int zero = 0;
unsigned char var_20 = (unsigned char)134;
unsigned short var_21 = (unsigned short)32924;
void init() {
}

void checksum() {
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
