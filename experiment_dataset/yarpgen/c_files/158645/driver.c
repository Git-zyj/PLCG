#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12972022952969888617ULL;
int var_1 = -1457596607;
unsigned char var_3 = (unsigned char)195;
unsigned short var_7 = (unsigned short)61769;
int zero = 0;
short var_10 = (short)25671;
int var_11 = 294649733;
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
