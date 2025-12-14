#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2926671735U;
unsigned int var_11 = 2231336708U;
unsigned long long int var_15 = 18116812691741494364ULL;
int zero = 0;
signed char var_17 = (signed char)-5;
unsigned int var_18 = 1098610186U;
unsigned int var_19 = 2101567576U;
unsigned short var_20 = (unsigned short)47013;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
