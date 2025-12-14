#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)72;
unsigned long long int var_5 = 11811273107163327482ULL;
unsigned char var_6 = (unsigned char)33;
unsigned long long int var_7 = 7771494228465633182ULL;
unsigned short var_13 = (unsigned short)37132;
int zero = 0;
int var_20 = 842053476;
short var_21 = (short)-6234;
int var_22 = 379968702;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
