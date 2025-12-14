#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1017820878U;
short var_1 = (short)-14385;
unsigned long long int var_4 = 13895973405725386497ULL;
unsigned short var_5 = (unsigned short)27024;
int var_6 = -957851423;
int var_10 = -1045434555;
_Bool var_14 = (_Bool)1;
int var_15 = -1109894247;
unsigned int var_16 = 3145055717U;
int zero = 0;
long long int var_18 = 5528820422476644570LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
