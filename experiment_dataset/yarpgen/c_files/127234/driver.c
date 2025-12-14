#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45475;
unsigned short var_2 = (unsigned short)19088;
unsigned short var_4 = (unsigned short)57414;
unsigned short var_6 = (unsigned short)26064;
int zero = 0;
unsigned short var_14 = (unsigned short)19067;
unsigned short var_15 = (unsigned short)63226;
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
