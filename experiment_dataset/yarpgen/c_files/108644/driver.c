#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-24695;
unsigned long long int var_5 = 11627817376180378204ULL;
unsigned int var_8 = 1855342593U;
short var_11 = (short)-1601;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 4623216573759552012ULL;
int zero = 0;
unsigned long long int var_19 = 7328652847199175627ULL;
unsigned short var_20 = (unsigned short)64561;
unsigned long long int var_21 = 6659159411080412108ULL;
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
