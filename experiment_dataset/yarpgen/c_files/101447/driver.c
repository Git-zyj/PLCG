#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8868149421464596769ULL;
unsigned long long int var_2 = 656326331782075035ULL;
long long int var_3 = -9187096147985618057LL;
unsigned long long int var_5 = 8826284635962197109ULL;
signed char var_6 = (signed char)2;
short var_7 = (short)-13884;
signed char var_8 = (signed char)16;
int zero = 0;
unsigned long long int var_14 = 16760161059742622904ULL;
unsigned long long int var_15 = 354562923100949914ULL;
short var_16 = (short)27160;
signed char var_17 = (signed char)-116;
void init() {
}

void checksum() {
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
