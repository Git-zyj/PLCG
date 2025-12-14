#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3297807318U;
short var_6 = (short)-9158;
unsigned long long int var_7 = 7315802581848796910ULL;
unsigned short var_9 = (unsigned short)560;
unsigned long long int var_12 = 9387528504555366183ULL;
unsigned int var_14 = 998783703U;
unsigned int var_18 = 2493049405U;
int zero = 0;
unsigned short var_19 = (unsigned short)20498;
unsigned int var_20 = 48846339U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
