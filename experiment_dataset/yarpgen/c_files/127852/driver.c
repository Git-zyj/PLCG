#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6516;
signed char var_6 = (signed char)-115;
unsigned char var_7 = (unsigned char)76;
long long int var_10 = -4269864899105068259LL;
unsigned long long int var_14 = 1741793055773020092ULL;
int zero = 0;
int var_16 = -886743431;
unsigned long long int var_17 = 12998096505357365064ULL;
long long int var_18 = -4291896862151268529LL;
long long int var_19 = -3537968081198583434LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
