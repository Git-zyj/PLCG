#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)64;
unsigned short var_2 = (unsigned short)39641;
unsigned short var_3 = (unsigned short)54746;
long long int var_4 = -3534047584642675626LL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)28;
unsigned long long int var_9 = 12879876929952298440ULL;
int zero = 0;
long long int var_10 = -2786742029477449558LL;
short var_11 = (short)-31506;
unsigned int var_12 = 536503240U;
unsigned int var_13 = 2387440053U;
unsigned int var_14 = 2980846860U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
