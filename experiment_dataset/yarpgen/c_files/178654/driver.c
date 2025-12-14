#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9085182455151577546LL;
unsigned long long int var_1 = 614530427958919280ULL;
unsigned long long int var_2 = 2957830420530919351ULL;
short var_3 = (short)19045;
int var_4 = 1242676889;
unsigned short var_5 = (unsigned short)63844;
unsigned long long int var_6 = 12563276847321193937ULL;
unsigned char var_7 = (unsigned char)8;
unsigned long long int var_8 = 2117679322084747979ULL;
unsigned int var_9 = 4010686527U;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)-25398;
unsigned short var_12 = (unsigned short)56485;
long long int var_13 = -8146196468995968006LL;
unsigned long long int var_14 = 8471621177004912915ULL;
unsigned long long int var_15 = 1016370651287441395ULL;
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
