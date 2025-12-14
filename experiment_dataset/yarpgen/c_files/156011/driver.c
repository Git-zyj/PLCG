#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21969;
unsigned short var_2 = (unsigned short)33235;
signed char var_3 = (signed char)113;
unsigned long long int var_4 = 8693054014153340910ULL;
long long int var_5 = -7892356873447126318LL;
unsigned short var_6 = (unsigned short)21788;
unsigned short var_7 = (unsigned short)16130;
long long int var_8 = -2309398532902827407LL;
unsigned short var_9 = (unsigned short)55032;
signed char var_12 = (signed char)-64;
int zero = 0;
unsigned long long int var_13 = 5657987848732362421ULL;
unsigned short var_14 = (unsigned short)10552;
unsigned long long int var_15 = 17689843232685763163ULL;
unsigned short var_16 = (unsigned short)64650;
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
