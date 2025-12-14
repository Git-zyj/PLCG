#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_5 = (unsigned char)23;
int var_6 = -210657848;
unsigned int var_9 = 1263398162U;
short var_10 = (short)-10334;
int zero = 0;
short var_14 = (short)-31321;
int var_15 = -1855267276;
unsigned long long int var_16 = 9864686099203871965ULL;
unsigned char var_17 = (unsigned char)212;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
