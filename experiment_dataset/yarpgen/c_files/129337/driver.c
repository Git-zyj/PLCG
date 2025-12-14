#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 2136602986697113684ULL;
unsigned long long int var_9 = 8300990852630971267ULL;
unsigned short var_11 = (unsigned short)57042;
int zero = 0;
unsigned long long int var_16 = 12952436365765769039ULL;
short var_17 = (short)-2299;
void init() {
}

void checksum() {
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
