#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23631;
unsigned short var_6 = (unsigned short)25625;
unsigned short var_9 = (unsigned short)5493;
int var_11 = 1467892894;
int var_13 = -1829509511;
unsigned char var_14 = (unsigned char)187;
int zero = 0;
unsigned char var_16 = (unsigned char)114;
unsigned char var_17 = (unsigned char)241;
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
