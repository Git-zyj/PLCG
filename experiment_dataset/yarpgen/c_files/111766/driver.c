#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21669;
unsigned char var_2 = (unsigned char)74;
unsigned int var_5 = 869398843U;
int var_6 = 2010000730;
unsigned long long int var_8 = 16295739443716462166ULL;
unsigned int var_13 = 3752318551U;
long long int var_14 = 6589638337454025511LL;
unsigned char var_15 = (unsigned char)235;
int zero = 0;
unsigned int var_18 = 3160043654U;
unsigned char var_19 = (unsigned char)242;
unsigned long long int var_20 = 16164745326399079266ULL;
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
