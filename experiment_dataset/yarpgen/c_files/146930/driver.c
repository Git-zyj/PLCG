#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55808;
unsigned long long int var_2 = 7103755367260486674ULL;
unsigned short var_5 = (unsigned short)21049;
signed char var_6 = (signed char)-9;
int zero = 0;
unsigned long long int var_15 = 13863690031013017997ULL;
unsigned char var_16 = (unsigned char)74;
int var_17 = -1406289833;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
