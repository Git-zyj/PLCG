#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-105;
signed char var_1 = (signed char)-22;
short var_2 = (short)-13793;
int var_3 = -812917578;
unsigned int var_4 = 974687554U;
short var_5 = (short)-20748;
unsigned long long int var_6 = 12319831692865758035ULL;
unsigned char var_7 = (unsigned char)119;
long long int var_8 = 4179253248601484611LL;
unsigned int var_9 = 2750764482U;
int zero = 0;
unsigned long long int var_10 = 18256547223178692043ULL;
long long int var_11 = 2132375553533388408LL;
unsigned long long int var_12 = 7227737278316967067ULL;
signed char var_13 = (signed char)-36;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
