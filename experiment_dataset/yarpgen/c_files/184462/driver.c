#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -601335375386079475LL;
signed char var_2 = (signed char)47;
long long int var_5 = 7661833659240810764LL;
_Bool var_6 = (_Bool)0;
int zero = 0;
short var_10 = (short)5283;
signed char var_11 = (signed char)75;
unsigned long long int var_12 = 2350904267148341237ULL;
signed char var_13 = (signed char)-35;
int var_14 = 274719354;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
