#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 1980104966U;
short var_5 = (short)-24396;
long long int var_7 = -2157779653413188641LL;
signed char var_9 = (signed char)81;
unsigned int var_13 = 1472898461U;
int zero = 0;
unsigned short var_15 = (unsigned short)41060;
short var_16 = (short)18766;
long long int var_17 = -5994073812848804039LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
