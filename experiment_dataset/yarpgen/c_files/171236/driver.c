#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10197731217387635039ULL;
signed char var_1 = (signed char)90;
signed char var_7 = (signed char)-106;
short var_8 = (short)3398;
unsigned int var_10 = 1916032903U;
unsigned int var_11 = 968187065U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4860974985818958663ULL;
unsigned int var_16 = 4183260915U;
int zero = 0;
unsigned long long int var_19 = 13371071243356976403ULL;
unsigned long long int var_20 = 12797006539373619278ULL;
void init() {
}

void checksum() {
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
