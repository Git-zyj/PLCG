#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = 3772080773890258551LL;
long long int var_4 = 6766285559008248465LL;
unsigned short var_5 = (unsigned short)62440;
short var_7 = (short)2864;
unsigned short var_8 = (unsigned short)12553;
long long int var_10 = -1785525564848683216LL;
long long int var_11 = -1316555287498830683LL;
int zero = 0;
long long int var_14 = -2948038617526741170LL;
short var_15 = (short)-10996;
unsigned short var_16 = (unsigned short)2280;
void init() {
}

void checksum() {
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
