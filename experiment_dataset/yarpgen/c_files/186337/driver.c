#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 472404340;
long long int var_2 = -3595172627179366105LL;
unsigned int var_4 = 90513622U;
int var_7 = -340332331;
signed char var_8 = (signed char)-99;
unsigned int var_11 = 2080807188U;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)-28009;
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
