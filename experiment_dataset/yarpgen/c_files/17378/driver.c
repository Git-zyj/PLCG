#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3746738402U;
short var_3 = (short)-17618;
int var_4 = 1011916408;
unsigned long long int var_8 = 13711096374979051960ULL;
signed char var_12 = (signed char)-120;
long long int var_13 = -5744029891605305046LL;
int zero = 0;
int var_17 = 705610012;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
