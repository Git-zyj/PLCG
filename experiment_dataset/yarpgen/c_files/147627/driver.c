#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned short var_1 = (unsigned short)27372;
unsigned char var_3 = (unsigned char)88;
unsigned short var_6 = (unsigned short)5698;
unsigned char var_12 = (unsigned char)100;
unsigned char var_14 = (unsigned char)31;
int zero = 0;
int var_16 = -256249094;
int var_17 = 310491142;
void init() {
}

void checksum() {
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
