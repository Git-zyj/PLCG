#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51835;
unsigned short var_5 = (unsigned short)40210;
unsigned long long int var_9 = 15656799549482627960ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)55212;
unsigned char var_13 = (unsigned char)173;
void init() {
}

void checksum() {
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
