#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2043758971041983080LL;
short var_2 = (short)-13609;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2037018346U;
unsigned long long int var_9 = 10967007289811158371ULL;
unsigned long long int var_12 = 3413503822397953567ULL;
int zero = 0;
short var_14 = (short)-28740;
unsigned long long int var_15 = 15081613539569271138ULL;
signed char var_16 = (signed char)-79;
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
