#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8611653946908548732LL;
unsigned char var_4 = (unsigned char)160;
int var_6 = 1566983904;
unsigned short var_11 = (unsigned short)37745;
int zero = 0;
unsigned char var_15 = (unsigned char)21;
unsigned char var_16 = (unsigned char)60;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
