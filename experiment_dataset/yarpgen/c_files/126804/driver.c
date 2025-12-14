#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1135924903;
unsigned char var_5 = (unsigned char)129;
int zero = 0;
unsigned long long int var_13 = 6339327784240726718ULL;
short var_14 = (short)-15371;
long long int var_15 = 9018335309711008013LL;
unsigned long long int var_16 = 8295600500619075238ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
