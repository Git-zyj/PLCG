#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)36182;
short var_7 = (short)-20054;
int var_8 = 278747690;
unsigned char var_9 = (unsigned char)107;
int zero = 0;
unsigned long long int var_10 = 16971319229188384070ULL;
unsigned short var_11 = (unsigned short)1830;
unsigned char var_12 = (unsigned char)111;
long long int var_13 = 1888831766247228185LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
