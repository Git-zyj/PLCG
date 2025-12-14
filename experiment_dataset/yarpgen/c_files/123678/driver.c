#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30264;
unsigned long long int var_3 = 2802486775772949651ULL;
unsigned int var_4 = 2961149367U;
unsigned short var_7 = (unsigned short)63529;
signed char var_9 = (signed char)-4;
int var_11 = -1828097087;
unsigned short var_12 = (unsigned short)11660;
unsigned long long int var_15 = 3456792615818105174ULL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)127;
int zero = 0;
unsigned long long int var_20 = 16620874072172780377ULL;
long long int var_21 = -4350270291589287934LL;
unsigned int var_22 = 2927175873U;
long long int var_23 = -2913506732113739327LL;
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
