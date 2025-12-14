#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2146423207U;
unsigned short var_8 = (unsigned short)6116;
short var_11 = (short)-17804;
_Bool var_13 = (_Bool)0;
int zero = 0;
long long int var_19 = 4115370720752496293LL;
unsigned int var_20 = 3451754805U;
unsigned long long int var_21 = 8738483377771661417ULL;
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
