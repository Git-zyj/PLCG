#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4217443055U;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 17087195302127244428ULL;
signed char var_11 = (signed char)88;
short var_13 = (short)-30625;
short var_14 = (short)-5502;
int zero = 0;
unsigned long long int var_15 = 6014178161307941731ULL;
long long int var_16 = 6883988417017263043LL;
short var_17 = (short)-32584;
short var_18 = (short)27669;
unsigned int var_19 = 624667022U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
