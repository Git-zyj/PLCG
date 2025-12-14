#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
short var_2 = (short)-16560;
unsigned int var_4 = 3843825901U;
short var_5 = (short)-6323;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 16690344145518351148ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1171735402430233679ULL;
int var_18 = 1529934401;
int zero = 0;
short var_19 = (short)17052;
unsigned long long int var_20 = 6870624911313009001ULL;
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
