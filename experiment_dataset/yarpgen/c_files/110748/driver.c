#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1252315206U;
signed char var_2 = (signed char)107;
unsigned long long int var_4 = 7043582076804865765ULL;
signed char var_10 = (signed char)88;
short var_11 = (short)-19544;
int zero = 0;
unsigned int var_15 = 2570122896U;
unsigned int var_16 = 2082037289U;
unsigned int var_17 = 3873452393U;
unsigned int var_18 = 756857547U;
unsigned long long int var_19 = 219942947634623835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
