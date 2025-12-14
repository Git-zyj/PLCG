#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1531345007U;
short var_2 = (short)28014;
unsigned char var_3 = (unsigned char)172;
int zero = 0;
unsigned short var_10 = (unsigned short)59620;
unsigned short var_11 = (unsigned short)22543;
short var_12 = (short)-20560;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
