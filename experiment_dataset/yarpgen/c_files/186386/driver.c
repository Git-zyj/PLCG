#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45826;
unsigned short var_4 = (unsigned short)57751;
short var_6 = (short)18109;
unsigned short var_7 = (unsigned short)18401;
unsigned short var_9 = (unsigned short)33055;
int zero = 0;
unsigned short var_14 = (unsigned short)5600;
unsigned short var_15 = (unsigned short)42751;
int var_16 = 1005664792;
int var_17 = -1738644101;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
