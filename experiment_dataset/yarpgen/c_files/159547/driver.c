#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5497;
short var_6 = (short)-18266;
short var_8 = (short)5523;
_Bool var_11 = (_Bool)1;
long long int var_13 = -1485698219061725641LL;
signed char var_14 = (signed char)102;
int var_15 = 1641234029;
short var_16 = (short)5798;
long long int var_17 = -721696822727579821LL;
int zero = 0;
unsigned long long int var_18 = 7951181726427878640ULL;
unsigned long long int var_19 = 15798504226275390831ULL;
signed char var_20 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
