#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4324;
unsigned short var_4 = (unsigned short)51105;
unsigned long long int var_8 = 4644108616514158689ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)146;
long long int var_12 = 477126414991794275LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
