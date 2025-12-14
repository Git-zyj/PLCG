#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
short var_2 = (short)-24472;
int var_11 = 661954029;
int var_14 = 371867127;
int zero = 0;
long long int var_15 = -3500674085288198878LL;
unsigned long long int var_16 = 12114073765982941256ULL;
signed char var_17 = (signed char)100;
signed char var_18 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
