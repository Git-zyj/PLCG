#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23594;
unsigned short var_2 = (unsigned short)19376;
unsigned int var_3 = 2709203007U;
unsigned char var_7 = (unsigned char)85;
int zero = 0;
short var_19 = (short)29899;
unsigned short var_20 = (unsigned short)42975;
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
