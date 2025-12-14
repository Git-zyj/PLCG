#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)16828;
signed char var_7 = (signed char)-28;
int var_11 = 1401320378;
int zero = 0;
signed char var_15 = (signed char)-60;
unsigned long long int var_16 = 11509491307394997776ULL;
unsigned int var_17 = 2544141726U;
int var_18 = 795509913;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
