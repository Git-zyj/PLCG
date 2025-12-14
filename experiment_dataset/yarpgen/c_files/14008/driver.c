#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-14429;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 7948150484224089567ULL;
short var_14 = (short)2903;
short var_17 = (short)-2;
int zero = 0;
short var_20 = (short)-32657;
unsigned long long int var_21 = 2776611205914108388ULL;
short var_22 = (short)-11266;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
