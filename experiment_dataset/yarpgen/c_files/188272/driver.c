#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)223;
short var_3 = (short)-20407;
short var_8 = (short)-3460;
int zero = 0;
unsigned short var_10 = (unsigned short)19305;
unsigned short var_11 = (unsigned short)43058;
short var_12 = (short)31888;
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
