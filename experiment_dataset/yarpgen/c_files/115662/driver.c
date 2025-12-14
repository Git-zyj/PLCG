#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12364280689966406160ULL;
unsigned long long int var_6 = 5458404029821595835ULL;
unsigned long long int var_7 = 8038652970920901216ULL;
unsigned long long int var_8 = 114036316623100306ULL;
unsigned long long int var_12 = 11044056265484402511ULL;
int zero = 0;
unsigned long long int var_13 = 3945868578429972916ULL;
unsigned long long int var_14 = 17431873906367297290ULL;
void init() {
}

void checksum() {
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
