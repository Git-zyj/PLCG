#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)52;
unsigned long long int var_7 = 16580674583779612393ULL;
unsigned long long int var_10 = 13534817803423115257ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)38482;
long long int var_19 = -5937707183579603269LL;
long long int var_20 = -7529993047169706059LL;
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
