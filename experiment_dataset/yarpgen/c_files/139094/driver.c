#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7030;
long long int var_1 = 5499250280120876894LL;
unsigned int var_5 = 3143935351U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)30374;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-23363;
unsigned short var_16 = (unsigned short)53716;
unsigned long long int var_17 = 13257492328769007165ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)49510;
long long int var_19 = 7416746930708994290LL;
short var_20 = (short)-31862;
unsigned short var_21 = (unsigned short)7764;
int var_22 = 76590052;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
