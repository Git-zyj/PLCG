#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)205;
short var_2 = (short)8001;
int var_8 = -1370527618;
int var_11 = -271214169;
int zero = 0;
unsigned short var_12 = (unsigned short)24096;
unsigned long long int var_13 = 8306015395906032741ULL;
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
