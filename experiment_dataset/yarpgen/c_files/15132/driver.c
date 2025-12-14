#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)122;
signed char var_11 = (signed char)83;
long long int var_12 = 7645964858712671938LL;
unsigned short var_13 = (unsigned short)55753;
int zero = 0;
signed char var_14 = (signed char)0;
unsigned short var_15 = (unsigned short)32433;
unsigned char var_16 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
