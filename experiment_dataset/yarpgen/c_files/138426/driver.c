#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25828;
unsigned int var_1 = 1788808802U;
_Bool var_5 = (_Bool)0;
short var_9 = (short)3825;
unsigned long long int var_11 = 16318974645781030073ULL;
short var_13 = (short)-28674;
int zero = 0;
int var_14 = -1582794373;
unsigned char var_15 = (unsigned char)59;
int var_16 = -1825818778;
unsigned long long int var_17 = 6862526062552819467ULL;
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
