#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2815674590U;
unsigned int var_1 = 3388598439U;
signed char var_5 = (signed char)-31;
unsigned char var_11 = (unsigned char)231;
unsigned long long int var_15 = 696886281504545307ULL;
int zero = 0;
short var_18 = (short)-28843;
unsigned long long int var_19 = 16119050505526132101ULL;
unsigned long long int var_20 = 16232526730790290835ULL;
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
