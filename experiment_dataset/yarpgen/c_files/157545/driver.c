#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1359449824513782352LL;
unsigned char var_3 = (unsigned char)17;
short var_6 = (short)10631;
short var_12 = (short)-4063;
unsigned int var_14 = 4212287742U;
int zero = 0;
unsigned short var_15 = (unsigned short)56708;
unsigned int var_16 = 361366556U;
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
