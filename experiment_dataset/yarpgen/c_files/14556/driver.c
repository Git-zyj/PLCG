#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4269248514U;
unsigned char var_6 = (unsigned char)246;
unsigned int var_8 = 1245332960U;
int zero = 0;
unsigned char var_16 = (unsigned char)217;
unsigned short var_17 = (unsigned short)54472;
unsigned int var_18 = 2357068614U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
