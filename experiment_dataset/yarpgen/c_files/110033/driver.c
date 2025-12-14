#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)52903;
int var_3 = 253535127;
int var_6 = 1680568773;
unsigned char var_8 = (unsigned char)5;
int zero = 0;
unsigned int var_12 = 1755878621U;
unsigned int var_13 = 1350229598U;
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
