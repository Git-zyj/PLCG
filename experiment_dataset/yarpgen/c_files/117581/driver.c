#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27251;
unsigned short var_2 = (unsigned short)34151;
unsigned short var_6 = (unsigned short)39400;
unsigned short var_9 = (unsigned short)55246;
unsigned short var_12 = (unsigned short)30086;
int zero = 0;
unsigned short var_18 = (unsigned short)16043;
unsigned short var_19 = (unsigned short)43877;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
