#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49874;
unsigned short var_4 = (unsigned short)21550;
long long int var_6 = -4728410751886263347LL;
long long int var_8 = 2331655723732562794LL;
int var_9 = -1557190293;
unsigned short var_12 = (unsigned short)41346;
unsigned short var_13 = (unsigned short)36621;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-19280;
int var_16 = -661295426;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
