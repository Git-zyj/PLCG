#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 532887812U;
int var_5 = 517647248;
unsigned long long int var_6 = 13666097910309348724ULL;
_Bool var_8 = (_Bool)0;
int var_11 = -1405670633;
unsigned long long int var_12 = 7233796672758987375ULL;
int var_13 = -1920963401;
int zero = 0;
int var_15 = -2119393172;
unsigned int var_16 = 2077333551U;
signed char var_17 = (signed char)79;
long long int var_18 = 5670265448550137039LL;
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
