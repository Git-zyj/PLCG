#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 4915116864791664939ULL;
unsigned long long int var_12 = 14324068438876859767ULL;
unsigned long long int var_13 = 8495356391761737163ULL;
unsigned int var_15 = 3112230873U;
int zero = 0;
unsigned int var_17 = 1155483880U;
unsigned long long int var_18 = 7871328733455990552ULL;
unsigned int var_19 = 4097824193U;
unsigned long long int var_20 = 13510396536972835311ULL;
unsigned int var_21 = 1184058300U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
