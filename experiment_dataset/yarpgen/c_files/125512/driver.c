#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49536;
unsigned short var_2 = (unsigned short)28626;
int var_6 = -1781156174;
int var_8 = -70784467;
int var_12 = -58398723;
int zero = 0;
unsigned short var_15 = (unsigned short)16384;
int var_16 = 1011125743;
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
