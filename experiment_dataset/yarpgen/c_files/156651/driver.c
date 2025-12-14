#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)84;
unsigned char var_3 = (unsigned char)139;
signed char var_4 = (signed char)-126;
long long int var_5 = 4219295841725560897LL;
long long int var_11 = 8686176843868194844LL;
signed char var_13 = (signed char)11;
int var_14 = 1632931317;
unsigned char var_15 = (unsigned char)252;
int zero = 0;
unsigned int var_20 = 527793879U;
unsigned char var_21 = (unsigned char)81;
signed char var_22 = (signed char)82;
long long int var_23 = 4611352822917467473LL;
unsigned char var_24 = (unsigned char)254;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
