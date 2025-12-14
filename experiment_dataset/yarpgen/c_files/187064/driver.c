#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)96;
signed char var_1 = (signed char)107;
int var_5 = -1507635235;
unsigned long long int var_6 = 12668166311867830045ULL;
unsigned short var_7 = (unsigned short)4066;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-13944;
short var_12 = (short)-11647;
int zero = 0;
short var_13 = (short)18378;
short var_14 = (short)12843;
long long int var_15 = 2919506522929189239LL;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)25881;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
