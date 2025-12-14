#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9077526886259303343LL;
int var_6 = 1815591843;
signed char var_9 = (signed char)62;
signed char var_11 = (signed char)-15;
signed char var_12 = (signed char)1;
unsigned long long int var_13 = 15966647187013947541ULL;
unsigned long long int var_14 = 1891227548357515774ULL;
signed char var_15 = (signed char)51;
int zero = 0;
unsigned int var_17 = 2847376625U;
unsigned long long int var_18 = 4193288455628549702ULL;
int var_19 = 1087502975;
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
