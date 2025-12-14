#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5675856283065321458ULL;
signed char var_6 = (signed char)3;
signed char var_8 = (signed char)-19;
short var_10 = (short)10231;
unsigned short var_19 = (unsigned short)25171;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1989840278;
void init() {
}

void checksum() {
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
