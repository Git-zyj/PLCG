#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 14569882602633788305ULL;
unsigned short var_3 = (unsigned short)50458;
long long int var_4 = 3810444656982303381LL;
long long int var_5 = -7706898228471716652LL;
int var_10 = -1604394931;
long long int var_12 = -2421007585428117225LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)185;
unsigned char var_18 = (unsigned char)255;
void init() {
}

void checksum() {
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
