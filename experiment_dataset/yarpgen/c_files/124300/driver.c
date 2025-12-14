#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 259119016;
int var_5 = 914519833;
unsigned short var_10 = (unsigned short)11210;
signed char var_13 = (signed char)115;
int zero = 0;
signed char var_15 = (signed char)-98;
unsigned short var_16 = (unsigned short)20270;
void init() {
}

void checksum() {
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
