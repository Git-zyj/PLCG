#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16048;
_Bool var_4 = (_Bool)1;
int var_5 = 2039631892;
signed char var_6 = (signed char)19;
int var_7 = -593900021;
unsigned long long int var_8 = 18103272686746351816ULL;
unsigned long long int var_11 = 10027296315716201852ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)62484;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3666163376U;
unsigned short var_15 = (unsigned short)4112;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
