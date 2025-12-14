#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1756755880186082497LL;
unsigned int var_2 = 1648677077U;
unsigned short var_6 = (unsigned short)32183;
unsigned short var_7 = (unsigned short)64243;
unsigned long long int var_8 = 6877640072208178922ULL;
signed char var_12 = (signed char)-73;
int zero = 0;
long long int var_16 = 6057417675549401237LL;
long long int var_17 = -2744736384186631725LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
