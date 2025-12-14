#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)164;
signed char var_5 = (signed char)17;
int var_8 = -563935796;
unsigned short var_11 = (unsigned short)29492;
int zero = 0;
signed char var_14 = (signed char)-117;
long long int var_15 = -840925038649062492LL;
unsigned char var_16 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
