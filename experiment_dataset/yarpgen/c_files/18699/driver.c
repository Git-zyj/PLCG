#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)18;
unsigned int var_2 = 1223055636U;
unsigned int var_4 = 122537797U;
unsigned int var_5 = 1277432527U;
int var_12 = 1045120051;
int zero = 0;
short var_16 = (short)-12045;
unsigned long long int var_17 = 6431500072252638594ULL;
int var_18 = -712302986;
void init() {
}

void checksum() {
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
