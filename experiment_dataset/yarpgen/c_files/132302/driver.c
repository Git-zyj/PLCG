#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1274145055U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-76;
int zero = 0;
signed char var_13 = (signed char)103;
signed char var_14 = (signed char)-105;
short var_15 = (short)-8978;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
