#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)79;
unsigned int var_10 = 3986309361U;
short var_11 = (short)-28927;
unsigned long long int var_16 = 7225462417837313357ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-75;
int var_21 = -871981940;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
