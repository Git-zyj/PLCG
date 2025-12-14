#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)33125;
unsigned int var_12 = 1796561247U;
unsigned long long int var_17 = 6493122662112880377ULL;
int zero = 0;
long long int var_18 = 5646678249887818254LL;
unsigned short var_19 = (unsigned short)43278;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
