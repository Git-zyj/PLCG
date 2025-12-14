#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -615580769;
short var_3 = (short)-31188;
unsigned long long int var_4 = 13609893723989963841ULL;
_Bool var_6 = (_Bool)1;
int var_8 = 584493073;
long long int var_9 = 6851131931044161019LL;
unsigned char var_12 = (unsigned char)6;
int zero = 0;
long long int var_14 = -3623469064387985293LL;
unsigned long long int var_15 = 2918989914273526641ULL;
int var_16 = 1976724257;
signed char var_17 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
