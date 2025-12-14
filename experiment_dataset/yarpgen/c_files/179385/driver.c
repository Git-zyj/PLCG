#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19074;
unsigned long long int var_4 = 8474195079837158027ULL;
_Bool var_6 = (_Bool)0;
short var_10 = (short)-14760;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-50;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-38;
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
