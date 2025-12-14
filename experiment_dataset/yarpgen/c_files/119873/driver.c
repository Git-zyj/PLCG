#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)123;
short var_7 = (short)22769;
int var_12 = -993712337;
signed char var_14 = (signed char)0;
unsigned int var_15 = 309019968U;
int zero = 0;
long long int var_18 = -779333343796986681LL;
long long int var_19 = -7414412733580278266LL;
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
