#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1928599886;
unsigned long long int var_4 = 12688192159616197732ULL;
long long int var_11 = 6285052455469708921LL;
int zero = 0;
int var_12 = -1488494508;
unsigned long long int var_13 = 13874040284410926793ULL;
unsigned short var_14 = (unsigned short)30071;
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
