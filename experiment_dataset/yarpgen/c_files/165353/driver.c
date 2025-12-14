#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 811852547U;
unsigned int var_2 = 3072173206U;
signed char var_3 = (signed char)-114;
unsigned int var_9 = 911284668U;
long long int var_13 = 8085121651988779721LL;
int zero = 0;
unsigned int var_16 = 1984766128U;
unsigned int var_17 = 2103092496U;
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
