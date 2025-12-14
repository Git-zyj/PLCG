#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-243;
short var_1 = (short)9411;
unsigned long long int var_2 = 9188855955025539240ULL;
signed char var_4 = (signed char)100;
unsigned long long int var_7 = 4389918724596706998ULL;
int zero = 0;
int var_11 = 1293892339;
int var_12 = 2005405916;
unsigned int var_13 = 1738382641U;
unsigned long long int var_14 = 2360364993764652283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
