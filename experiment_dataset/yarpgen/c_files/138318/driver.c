#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29815;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)40290;
unsigned long long int var_4 = 8121418138266654984ULL;
unsigned short var_5 = (unsigned short)18960;
short var_6 = (short)-2824;
unsigned short var_7 = (unsigned short)31874;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-13667;
short var_10 = (short)20090;
short var_12 = (short)-29951;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)28848;
unsigned long long int var_15 = 500171792746269973ULL;
int zero = 0;
unsigned long long int var_16 = 6637233715645214635ULL;
unsigned int var_17 = 2653249711U;
unsigned int var_18 = 84246745U;
short var_19 = (short)-2056;
short var_20 = (short)16712;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
