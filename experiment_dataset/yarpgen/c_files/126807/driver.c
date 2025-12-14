#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)4547;
unsigned char var_9 = (unsigned char)100;
unsigned short var_12 = (unsigned short)46207;
short var_16 = (short)5461;
int zero = 0;
unsigned short var_17 = (unsigned short)18362;
long long int var_18 = -9001300582594867651LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
