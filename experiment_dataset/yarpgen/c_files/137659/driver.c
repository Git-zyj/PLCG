#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-322;
unsigned int var_1 = 563403889U;
short var_2 = (short)32297;
signed char var_4 = (signed char)122;
signed char var_8 = (signed char)-96;
unsigned int var_12 = 2667148548U;
unsigned int var_13 = 1094106232U;
unsigned long long int var_15 = 16189059027294595923ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)108;
unsigned short var_18 = (unsigned short)56642;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
