#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1434634165409191404ULL;
unsigned long long int var_8 = 16572700745136809360ULL;
unsigned long long int var_10 = 7804952729083066213ULL;
unsigned int var_15 = 199922449U;
int zero = 0;
signed char var_18 = (signed char)-17;
signed char var_19 = (signed char)-4;
_Bool var_20 = (_Bool)0;
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
