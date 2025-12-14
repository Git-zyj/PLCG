#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21135;
unsigned char var_8 = (unsigned char)99;
unsigned short var_10 = (unsigned short)34034;
unsigned char var_13 = (unsigned char)208;
int zero = 0;
long long int var_14 = 375418979330092487LL;
unsigned short var_15 = (unsigned short)40439;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
