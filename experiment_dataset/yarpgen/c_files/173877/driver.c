#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-18570;
signed char var_5 = (signed char)-127;
_Bool var_8 = (_Bool)0;
unsigned long long int var_14 = 14005230883270423225ULL;
unsigned long long int var_15 = 10806888622968298447ULL;
int zero = 0;
short var_17 = (short)-31005;
int var_18 = 1753725671;
unsigned long long int var_19 = 11948885752580294744ULL;
_Bool var_20 = (_Bool)0;
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
