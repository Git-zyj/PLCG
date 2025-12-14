#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
int var_1 = 1979211431;
short var_4 = (short)9185;
int var_8 = -1015306760;
int var_15 = 1029480412;
int var_17 = -798139346;
int zero = 0;
unsigned int var_18 = 1779126946U;
unsigned char var_19 = (unsigned char)246;
unsigned int var_20 = 1174002724U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
