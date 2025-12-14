#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8130;
long long int var_1 = -8218780024891821774LL;
unsigned long long int var_3 = 16020199867840961892ULL;
unsigned short var_5 = (unsigned short)61267;
int zero = 0;
unsigned char var_12 = (unsigned char)185;
short var_13 = (short)21200;
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
