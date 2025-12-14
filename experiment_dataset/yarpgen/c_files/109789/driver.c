#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5557;
unsigned long long int var_1 = 2596951987680697201ULL;
long long int var_3 = -3085695184387263607LL;
unsigned char var_11 = (unsigned char)128;
int zero = 0;
short var_16 = (short)4924;
unsigned short var_17 = (unsigned short)3784;
short var_18 = (short)30092;
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
