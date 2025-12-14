#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-3169;
short var_3 = (short)-13839;
short var_4 = (short)32199;
short var_9 = (short)13683;
unsigned long long int var_11 = 6725768172798994779ULL;
short var_12 = (short)3381;
short var_13 = (short)13076;
signed char var_15 = (signed char)-86;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-86;
short var_18 = (short)24261;
short var_19 = (short)-6830;
signed char var_20 = (signed char)88;
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
