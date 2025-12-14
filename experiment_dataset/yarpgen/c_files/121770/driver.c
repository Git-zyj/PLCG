#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8376171713775716514LL;
unsigned int var_1 = 701040172U;
long long int var_3 = 4150796328700463063LL;
signed char var_6 = (signed char)83;
int zero = 0;
short var_12 = (short)-7254;
unsigned int var_13 = 2143302428U;
short var_14 = (short)-14411;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
