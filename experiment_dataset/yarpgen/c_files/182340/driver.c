#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1008493787264884385LL;
signed char var_14 = (signed char)26;
unsigned int var_15 = 1827136747U;
int zero = 0;
short var_17 = (short)-5585;
short var_18 = (short)-11173;
unsigned int var_19 = 1813608274U;
void init() {
}

void checksum() {
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
