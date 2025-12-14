#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 1510356172315315360LL;
unsigned char var_2 = (unsigned char)241;
unsigned long long int var_5 = 3822205656220419049ULL;
short var_6 = (short)4698;
unsigned char var_8 = (unsigned char)124;
signed char var_9 = (signed char)-63;
unsigned long long int var_11 = 1110634487946398675ULL;
long long int var_12 = -7424379330362015263LL;
unsigned int var_15 = 1468855634U;
unsigned char var_18 = (unsigned char)253;
int zero = 0;
long long int var_19 = -7267791846340814402LL;
long long int var_20 = 156261823178919573LL;
signed char var_21 = (signed char)-35;
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
