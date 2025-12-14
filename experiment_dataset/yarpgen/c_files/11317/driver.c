#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1666104820697733939ULL;
_Bool var_6 = (_Bool)0;
unsigned int var_10 = 1288052376U;
int zero = 0;
unsigned int var_12 = 3127065417U;
unsigned char var_13 = (unsigned char)30;
short var_14 = (short)-78;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
