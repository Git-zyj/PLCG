#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
short var_2 = (short)-5442;
unsigned long long int var_3 = 10025987600292594530ULL;
unsigned long long int var_4 = 2562684941298292170ULL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 15183033874108796982ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
