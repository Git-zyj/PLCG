#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3298439743U;
unsigned char var_2 = (unsigned char)143;
unsigned char var_7 = (unsigned char)72;
unsigned char var_10 = (unsigned char)52;
unsigned int var_12 = 3584614054U;
int zero = 0;
unsigned short var_13 = (unsigned short)64217;
unsigned char var_14 = (unsigned char)192;
void init() {
}

void checksum() {
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
