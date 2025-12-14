#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3121980923763924533LL;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)32421;
_Bool var_9 = (_Bool)1;
long long int var_11 = 1587159022265112650LL;
int zero = 0;
short var_15 = (short)-26535;
int var_16 = -2128329938;
long long int var_17 = 7113770802773241209LL;
_Bool var_18 = (_Bool)0;
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
