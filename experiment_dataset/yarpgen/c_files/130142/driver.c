#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_11 = (unsigned char)213;
short var_17 = (short)20116;
unsigned long long int var_18 = 1050054126647394931ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 3266420387413201599ULL;
unsigned long long int var_21 = 50528484448891103ULL;
unsigned char var_22 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
