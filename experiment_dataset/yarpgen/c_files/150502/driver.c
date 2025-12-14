#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24556;
unsigned char var_5 = (unsigned char)229;
unsigned long long int var_6 = 173686364602683365ULL;
unsigned char var_10 = (unsigned char)174;
_Bool var_13 = (_Bool)0;
short var_15 = (short)28370;
int zero = 0;
signed char var_16 = (signed char)-87;
long long int var_17 = 4426347402406123727LL;
signed char var_18 = (signed char)17;
unsigned int var_19 = 3344490069U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
