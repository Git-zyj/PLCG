#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1070667498;
unsigned long long int var_5 = 10716690798637563196ULL;
_Bool var_7 = (_Bool)0;
short var_11 = (short)29019;
int zero = 0;
unsigned short var_15 = (unsigned short)11551;
_Bool var_16 = (_Bool)1;
int var_17 = 972087864;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
