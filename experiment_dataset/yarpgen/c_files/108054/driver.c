#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
short var_1 = (short)4815;
unsigned long long int var_2 = 15688320821561273598ULL;
signed char var_3 = (signed char)30;
unsigned short var_8 = (unsigned short)32254;
short var_9 = (short)10443;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-17688;
long long int var_13 = -303153562979141934LL;
_Bool var_14 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 2324646019U;
int zero = 0;
long long int var_20 = 7288891603157140463LL;
unsigned short var_21 = (unsigned short)3378;
unsigned short var_22 = (unsigned short)12310;
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
