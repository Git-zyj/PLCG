#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18664;
unsigned long long int var_4 = 8332176310885439342ULL;
unsigned int var_6 = 3420606032U;
int zero = 0;
long long int var_10 = 7243959079976048518LL;
unsigned short var_11 = (unsigned short)8673;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
