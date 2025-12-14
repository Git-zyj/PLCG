#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-17703;
int var_2 = -418549137;
unsigned long long int var_4 = 5655050015180500693ULL;
signed char var_5 = (signed char)92;
short var_7 = (short)18306;
int var_8 = 2110959307;
int zero = 0;
unsigned long long int var_10 = 16807815485595182791ULL;
unsigned long long int var_11 = 11789499156614091770ULL;
unsigned short var_12 = (unsigned short)63407;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
