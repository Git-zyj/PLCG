#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12952424624435772159ULL;
unsigned short var_3 = (unsigned short)32110;
_Bool var_7 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2012492260U;
int zero = 0;
unsigned short var_14 = (unsigned short)28182;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
