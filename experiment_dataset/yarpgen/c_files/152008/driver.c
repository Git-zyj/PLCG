#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21771;
unsigned long long int var_1 = 9535028187367930088ULL;
unsigned char var_14 = (unsigned char)67;
int zero = 0;
long long int var_16 = 6645067855040120020LL;
unsigned char var_17 = (unsigned char)152;
signed char var_18 = (signed char)106;
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
