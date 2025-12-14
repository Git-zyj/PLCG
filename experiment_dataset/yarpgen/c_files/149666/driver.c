#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7237170901432589337ULL;
unsigned char var_3 = (unsigned char)118;
unsigned int var_4 = 3689306232U;
unsigned int var_8 = 968193236U;
int zero = 0;
int var_12 = 1888780485;
unsigned short var_13 = (unsigned short)41387;
short var_14 = (short)-26171;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
