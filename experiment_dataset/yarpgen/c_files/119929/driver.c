#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-9;
unsigned long long int var_8 = 1452797886737157902ULL;
unsigned long long int var_12 = 14350900265889615916ULL;
short var_13 = (short)20359;
long long int var_14 = -6050653090745229711LL;
int zero = 0;
short var_17 = (short)-8146;
signed char var_18 = (signed char)-120;
unsigned long long int var_19 = 9454057884371443834ULL;
void init() {
}

void checksum() {
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
