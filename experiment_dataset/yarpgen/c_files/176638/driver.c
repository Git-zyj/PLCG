#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1384560063;
int var_2 = -750777211;
short var_3 = (short)20679;
short var_4 = (short)16855;
unsigned short var_5 = (unsigned short)38678;
short var_6 = (short)14198;
short var_7 = (short)15868;
short var_8 = (short)-11184;
int zero = 0;
unsigned short var_11 = (unsigned short)28522;
int var_12 = -262302141;
short var_13 = (short)-24013;
signed char var_14 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
