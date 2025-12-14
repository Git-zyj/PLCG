#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned char var_3 = (unsigned char)240;
unsigned long long int var_5 = 1901505160824731072ULL;
unsigned long long int var_6 = 17965116253492530285ULL;
long long int var_7 = -6315229956427804572LL;
int var_8 = 1984499318;
unsigned int var_10 = 38287033U;
unsigned long long int var_11 = 1916285890234748848ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)222;
unsigned int var_13 = 4263803046U;
long long int var_14 = 4873174049673174421LL;
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
