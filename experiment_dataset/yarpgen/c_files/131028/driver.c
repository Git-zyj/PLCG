#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-72;
short var_4 = (short)13498;
long long int var_8 = 3393634451716090090LL;
unsigned long long int var_10 = 5068522496944604583ULL;
int zero = 0;
int var_12 = -1522742886;
short var_13 = (short)28587;
short var_14 = (short)-6467;
int var_15 = 987082018;
int var_16 = 155947161;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
