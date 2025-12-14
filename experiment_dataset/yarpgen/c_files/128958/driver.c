#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)185;
short var_9 = (short)-8564;
long long int var_12 = 1910969000505716330LL;
signed char var_16 = (signed char)-121;
short var_18 = (short)14452;
int zero = 0;
unsigned char var_19 = (unsigned char)0;
unsigned short var_20 = (unsigned short)43255;
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
