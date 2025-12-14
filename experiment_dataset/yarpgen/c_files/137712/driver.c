#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -836483561416520591LL;
unsigned short var_1 = (unsigned short)23860;
unsigned int var_2 = 3538617796U;
int var_4 = -1964517963;
unsigned long long int var_5 = 6498907773199109918ULL;
short var_7 = (short)-7535;
unsigned short var_10 = (unsigned short)8519;
short var_11 = (short)18666;
int zero = 0;
unsigned long long int var_12 = 18146567562793339952ULL;
unsigned int var_13 = 520797905U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 611581618U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
