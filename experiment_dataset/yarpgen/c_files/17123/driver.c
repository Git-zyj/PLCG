#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28634;
unsigned char var_14 = (unsigned char)31;
long long int var_18 = 3414537481446966906LL;
int zero = 0;
unsigned short var_20 = (unsigned short)18389;
long long int var_21 = -6473792061298341661LL;
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
