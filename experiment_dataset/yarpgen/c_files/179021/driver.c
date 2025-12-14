#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 3157686703U;
long long int var_4 = -7349807033677926667LL;
int var_6 = 259672704;
unsigned int var_7 = 4093381277U;
unsigned int var_8 = 2338474273U;
unsigned long long int var_9 = 9847425692920944237ULL;
unsigned short var_15 = (unsigned short)19434;
int zero = 0;
short var_17 = (short)-9593;
unsigned int var_18 = 1001692598U;
long long int var_19 = 146510507308968442LL;
unsigned short var_20 = (unsigned short)51840;
long long int var_21 = 1809736936930767918LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
