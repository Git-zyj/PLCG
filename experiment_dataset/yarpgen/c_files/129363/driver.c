#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 242835179U;
signed char var_2 = (signed char)13;
unsigned long long int var_3 = 2844025428480321012ULL;
signed char var_4 = (signed char)12;
signed char var_5 = (signed char)-74;
unsigned int var_7 = 706950943U;
unsigned int var_10 = 3632353741U;
signed char var_11 = (signed char)-27;
unsigned long long int var_12 = 18131497825034708515ULL;
int zero = 0;
signed char var_13 = (signed char)-125;
unsigned long long int var_14 = 18281418679609637946ULL;
unsigned int var_15 = 967933391U;
signed char var_16 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
