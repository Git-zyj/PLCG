#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25713;
unsigned short var_3 = (unsigned short)39919;
short var_14 = (short)96;
unsigned int var_17 = 2631683485U;
signed char var_18 = (signed char)26;
int zero = 0;
signed char var_19 = (signed char)113;
unsigned long long int var_20 = 17659923594979463228ULL;
void init() {
}

void checksum() {
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
