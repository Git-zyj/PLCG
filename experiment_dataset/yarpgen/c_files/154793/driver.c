#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6132226382163301459LL;
long long int var_1 = -9097812069112624507LL;
unsigned int var_2 = 544640511U;
unsigned long long int var_3 = 10339920478589948552ULL;
signed char var_4 = (signed char)12;
unsigned short var_6 = (unsigned short)58582;
unsigned long long int var_7 = 15040290485013162077ULL;
long long int var_10 = -355220192488635397LL;
unsigned int var_11 = 3452096684U;
int zero = 0;
int var_12 = 42980457;
_Bool var_13 = (_Bool)0;
long long int var_14 = 5280649915097806886LL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
