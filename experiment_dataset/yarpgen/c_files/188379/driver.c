#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1507089991;
int var_2 = 731003334;
unsigned int var_4 = 1250433938U;
long long int var_7 = -7523709561208551097LL;
unsigned int var_9 = 1190111171U;
short var_12 = (short)-27134;
long long int var_14 = -588751581098858300LL;
int zero = 0;
int var_15 = 1810397649;
long long int var_16 = -4924230724790001427LL;
signed char var_17 = (signed char)-107;
long long int var_18 = 5651574662681834705LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
