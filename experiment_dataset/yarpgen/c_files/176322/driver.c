#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
long long int var_3 = 2509199787204502640LL;
short var_4 = (short)-28888;
long long int var_6 = -6328948585538762335LL;
int zero = 0;
short var_10 = (short)-7749;
unsigned long long int var_11 = 9222019841072143224ULL;
unsigned short var_12 = (unsigned short)54626;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
