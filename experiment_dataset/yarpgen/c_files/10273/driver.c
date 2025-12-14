#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)31;
unsigned int var_5 = 2877647874U;
signed char var_7 = (signed char)125;
int zero = 0;
unsigned long long int var_15 = 4000791150941235246ULL;
long long int var_16 = -2709492671779709150LL;
void init() {
}

void checksum() {
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
