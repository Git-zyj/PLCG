#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4669;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 646073051U;
short var_8 = (short)31528;
short var_9 = (short)4462;
unsigned int var_10 = 2457689974U;
unsigned short var_11 = (unsigned short)9412;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)14589;
int zero = 0;
unsigned long long int var_17 = 18443099605991472769ULL;
int var_18 = 918400892;
short var_19 = (short)7922;
signed char var_20 = (signed char)-75;
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
