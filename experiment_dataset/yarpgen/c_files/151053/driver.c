#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1926521064U;
int var_4 = -1899940019;
long long int var_7 = 3285231548234202275LL;
unsigned int var_9 = 108531740U;
short var_10 = (short)-16727;
unsigned short var_11 = (unsigned short)36213;
_Bool var_13 = (_Bool)0;
unsigned int var_19 = 968445240U;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1352523840;
long long int var_22 = 209361343967935385LL;
void init() {
}

void checksum() {
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
