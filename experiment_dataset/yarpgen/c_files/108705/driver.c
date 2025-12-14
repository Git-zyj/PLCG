#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21624;
int var_2 = -1271178898;
unsigned short var_4 = (unsigned short)17909;
unsigned char var_8 = (unsigned char)189;
unsigned long long int var_11 = 16292797773487382973ULL;
int zero = 0;
short var_17 = (short)26416;
unsigned char var_18 = (unsigned char)137;
short var_19 = (short)-6558;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
