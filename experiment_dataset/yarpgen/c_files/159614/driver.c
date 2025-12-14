#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11135006329324637146ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)16;
int zero = 0;
long long int var_11 = 3968708412880858881LL;
long long int var_12 = -2847244709769363370LL;
unsigned short var_13 = (unsigned short)29008;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
