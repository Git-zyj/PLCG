#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)81;
long long int var_4 = -2764567275901729514LL;
long long int var_7 = 3573104007945448502LL;
unsigned short var_8 = (unsigned short)47979;
short var_9 = (short)-23819;
int var_10 = 607409737;
signed char var_11 = (signed char)80;
int zero = 0;
short var_14 = (short)29365;
unsigned int var_15 = 268900425U;
_Bool var_16 = (_Bool)0;
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
