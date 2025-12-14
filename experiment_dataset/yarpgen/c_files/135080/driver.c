#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 1854121212U;
int var_10 = 391177963;
unsigned char var_11 = (unsigned char)240;
unsigned short var_13 = (unsigned short)22423;
short var_14 = (short)6573;
unsigned short var_17 = (unsigned short)49380;
int zero = 0;
unsigned long long int var_18 = 6486520376688531589ULL;
short var_19 = (short)18133;
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
