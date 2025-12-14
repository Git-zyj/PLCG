#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13123216000625672197ULL;
int var_3 = -68606186;
unsigned long long int var_8 = 1447074169885361911ULL;
short var_10 = (short)-28175;
signed char var_14 = (signed char)-15;
int zero = 0;
unsigned long long int var_15 = 5806817584142733918ULL;
unsigned long long int var_16 = 8646862655305460310ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1416316516U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
