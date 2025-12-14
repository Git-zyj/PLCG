#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3725289417U;
unsigned char var_11 = (unsigned char)63;
int zero = 0;
unsigned long long int var_19 = 6436990100600169107ULL;
unsigned short var_20 = (unsigned short)33856;
unsigned int var_21 = 3704846426U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
