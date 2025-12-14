#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2095979650;
short var_7 = (short)-11702;
unsigned long long int var_8 = 15759629293288452727ULL;
int var_12 = 1029426420;
int zero = 0;
signed char var_20 = (signed char)67;
unsigned long long int var_21 = 7126353008915149275ULL;
int var_22 = -1241740735;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
