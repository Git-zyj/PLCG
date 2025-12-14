#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40900;
signed char var_3 = (signed char)-75;
unsigned int var_9 = 3559775226U;
unsigned int var_10 = 2876317874U;
unsigned int var_11 = 1039467250U;
int zero = 0;
unsigned long long int var_12 = 3006269507621284430ULL;
short var_13 = (short)-6892;
long long int var_14 = -553562378930348040LL;
unsigned int var_15 = 715568806U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
