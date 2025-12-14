#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15035057908694889252ULL;
unsigned long long int var_7 = 9997935909187412595ULL;
signed char var_8 = (signed char)-111;
unsigned short var_12 = (unsigned short)9958;
unsigned short var_15 = (unsigned short)20131;
unsigned short var_16 = (unsigned short)20819;
unsigned short var_18 = (unsigned short)36185;
int zero = 0;
signed char var_19 = (signed char)10;
unsigned short var_20 = (unsigned short)53607;
long long int var_21 = -3047102087744995054LL;
void init() {
}

void checksum() {
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
