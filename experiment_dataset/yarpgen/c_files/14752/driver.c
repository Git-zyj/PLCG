#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10774;
long long int var_2 = -6976538878009233189LL;
int var_3 = 1122058314;
unsigned int var_4 = 2726466508U;
unsigned int var_6 = 4187710418U;
_Bool var_9 = (_Bool)1;
long long int var_10 = 8766056104963985464LL;
int zero = 0;
int var_11 = -1804646965;
unsigned short var_12 = (unsigned short)54059;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
