#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)44;
unsigned int var_17 = 2955334659U;
long long int var_18 = 5168854188200289906LL;
int zero = 0;
unsigned short var_20 = (unsigned short)1382;
unsigned short var_21 = (unsigned short)59700;
void init() {
}

void checksum() {
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
