#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 940209297U;
signed char var_3 = (signed char)-98;
signed char var_4 = (signed char)-85;
signed char var_10 = (signed char)-124;
unsigned int var_11 = 3455313394U;
signed char var_13 = (signed char)-81;
unsigned int var_14 = 4269355553U;
unsigned int var_17 = 3146900434U;
signed char var_18 = (signed char)34;
unsigned long long int var_19 = 3998776549924479952ULL;
int zero = 0;
signed char var_20 = (signed char)83;
unsigned long long int var_21 = 30184286729312747ULL;
unsigned int var_22 = 3286979926U;
unsigned int var_23 = 2943283124U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
