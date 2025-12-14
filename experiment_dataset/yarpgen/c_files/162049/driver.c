#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21447;
unsigned long long int var_4 = 15740589984933431373ULL;
_Bool var_10 = (_Bool)0;
long long int var_12 = 4498820468271005786LL;
unsigned int var_13 = 2912879973U;
long long int var_15 = 7229976961015198898LL;
int zero = 0;
signed char var_17 = (signed char)-112;
unsigned int var_18 = 1885086396U;
signed char var_19 = (signed char)-67;
short var_20 = (short)-23427;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
