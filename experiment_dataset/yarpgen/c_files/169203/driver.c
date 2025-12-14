#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1652253672;
unsigned char var_4 = (unsigned char)73;
unsigned short var_12 = (unsigned short)41733;
int zero = 0;
unsigned short var_13 = (unsigned short)41702;
int var_14 = 476313650;
void init() {
}

void checksum() {
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
