#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 4094525055146566198ULL;
_Bool var_7 = (_Bool)0;
int var_8 = 1632229087;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_19 = (short)-31796;
unsigned long long int var_20 = 12634259626526328309ULL;
short var_21 = (short)-12391;
void init() {
}

void checksum() {
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
