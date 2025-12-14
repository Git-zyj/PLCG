#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4170222933564305650ULL;
unsigned short var_3 = (unsigned short)23274;
unsigned long long int var_7 = 16881003633473603244ULL;
long long int var_14 = 2870749634013166814LL;
int zero = 0;
short var_15 = (short)21050;
int var_16 = -1543343497;
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
