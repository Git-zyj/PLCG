#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10159013827898584584ULL;
short var_5 = (short)2148;
unsigned short var_6 = (unsigned short)38851;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)238;
short var_13 = (short)-3075;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
