#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_6 = 1478809492;
unsigned short var_7 = (unsigned short)36391;
unsigned long long int var_9 = 5257281604703372971ULL;
int zero = 0;
short var_10 = (short)-17250;
unsigned short var_11 = (unsigned short)24860;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
