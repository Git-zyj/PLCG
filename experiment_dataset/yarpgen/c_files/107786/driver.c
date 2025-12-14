#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52555;
short var_2 = (short)1323;
unsigned long long int var_3 = 11587800295733670300ULL;
int var_7 = -1426673702;
int zero = 0;
long long int var_11 = -8344074136531603897LL;
unsigned long long int var_12 = 2286625718918141460ULL;
unsigned char var_13 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
