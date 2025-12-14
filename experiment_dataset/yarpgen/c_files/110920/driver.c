#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned int var_10 = 3410977117U;
short var_11 = (short)4094;
unsigned int var_12 = 92867113U;
int zero = 0;
short var_17 = (short)-3586;
long long int var_18 = -6274344257311463793LL;
int var_19 = -1570717487;
unsigned int var_20 = 3944019014U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
