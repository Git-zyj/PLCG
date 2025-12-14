#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2432559561U;
unsigned int var_9 = 1656076270U;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)61947;
_Bool var_16 = (_Bool)0;
int zero = 0;
int var_17 = 1971839111;
int var_18 = 326402641;
signed char var_19 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
