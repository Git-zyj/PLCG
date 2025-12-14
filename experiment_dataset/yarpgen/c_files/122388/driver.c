#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13462049603597629169ULL;
long long int var_4 = 1791958659725523697LL;
unsigned int var_10 = 3886684192U;
unsigned short var_11 = (unsigned short)44119;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2487072493U;
long long int var_14 = 2022529587965581155LL;
signed char var_15 = (signed char)40;
int zero = 0;
int var_17 = 2145000556;
int var_18 = -1836701872;
long long int var_19 = -326294215278352617LL;
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
