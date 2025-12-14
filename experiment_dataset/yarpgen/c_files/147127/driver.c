#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14192;
unsigned int var_3 = 504332142U;
unsigned int var_5 = 154057888U;
unsigned long long int var_6 = 2314256596083969357ULL;
signed char var_7 = (signed char)-9;
signed char var_11 = (signed char)-61;
int zero = 0;
signed char var_12 = (signed char)-1;
signed char var_13 = (signed char)-11;
signed char var_14 = (signed char)-18;
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
