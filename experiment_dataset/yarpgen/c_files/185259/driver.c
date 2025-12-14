#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7601195051152074071LL;
unsigned long long int var_8 = 13057916140135668309ULL;
unsigned short var_11 = (unsigned short)44928;
unsigned long long int var_12 = 6822063830868353171ULL;
int var_13 = 556694724;
short var_16 = (short)16385;
int zero = 0;
int var_18 = 1296433833;
unsigned short var_19 = (unsigned short)49533;
unsigned char var_20 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
