#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 400260162847617022LL;
unsigned short var_6 = (unsigned short)55148;
unsigned short var_8 = (unsigned short)48055;
int var_14 = -596792698;
int var_15 = 2035847722;
unsigned long long int var_19 = 6693830799102987514ULL;
int zero = 0;
unsigned int var_20 = 2623014244U;
unsigned int var_21 = 2026315663U;
void init() {
}

void checksum() {
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
