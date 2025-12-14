#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)95;
signed char var_2 = (signed char)-37;
short var_3 = (short)-11667;
unsigned long long int var_5 = 4093588336564628387ULL;
unsigned long long int var_6 = 13362515987593330715ULL;
unsigned int var_12 = 3973604856U;
_Bool var_17 = (_Bool)1;
short var_18 = (short)6898;
int var_19 = -1715518736;
int zero = 0;
short var_20 = (short)-28233;
short var_21 = (short)-19711;
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
