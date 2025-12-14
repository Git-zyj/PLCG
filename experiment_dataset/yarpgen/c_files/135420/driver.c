#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-8901;
_Bool var_3 = (_Bool)1;
unsigned short var_9 = (unsigned short)47002;
int zero = 0;
unsigned short var_11 = (unsigned short)31819;
short var_12 = (short)-18809;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6715024320611965833ULL;
long long int var_15 = 959017141397751132LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
