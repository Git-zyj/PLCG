#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 927339621U;
int var_2 = -162109029;
short var_5 = (short)-1045;
long long int var_7 = 1336189822026650959LL;
unsigned char var_11 = (unsigned char)11;
int zero = 0;
int var_12 = -469613661;
unsigned int var_13 = 3445762896U;
int var_14 = 357746829;
short var_15 = (short)4404;
signed char var_16 = (signed char)46;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
