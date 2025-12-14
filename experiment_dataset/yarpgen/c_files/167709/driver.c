#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1683324581;
unsigned short var_2 = (unsigned short)6057;
_Bool var_4 = (_Bool)0;
short var_7 = (short)4377;
int var_10 = -643921745;
int var_11 = 1847721399;
int var_12 = 827528889;
int var_14 = -1533312452;
int var_15 = -667593545;
int zero = 0;
unsigned long long int var_16 = 8952681933103204961ULL;
unsigned int var_17 = 4200251293U;
void init() {
}

void checksum() {
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
