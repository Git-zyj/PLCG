#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5771366161734929719LL;
short var_6 = (short)26443;
int var_7 = -516200318;
int var_10 = -1178466787;
unsigned char var_11 = (unsigned char)224;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_13 = (short)16016;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)159;
signed char var_16 = (signed char)-126;
void init() {
}

void checksum() {
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
