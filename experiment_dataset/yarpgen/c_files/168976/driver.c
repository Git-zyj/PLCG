#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2658099278U;
int var_11 = -7419924;
unsigned int var_14 = 3540925432U;
int var_17 = 198876618;
int zero = 0;
unsigned int var_18 = 970832895U;
signed char var_19 = (signed char)6;
short var_20 = (short)-30148;
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
