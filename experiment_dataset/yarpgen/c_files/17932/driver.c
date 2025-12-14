#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1502068852U;
unsigned short var_6 = (unsigned short)5376;
unsigned short var_7 = (unsigned short)17486;
unsigned short var_13 = (unsigned short)26128;
int zero = 0;
unsigned short var_19 = (unsigned short)27506;
signed char var_20 = (signed char)102;
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
