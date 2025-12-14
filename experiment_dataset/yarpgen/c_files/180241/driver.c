#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32074;
long long int var_1 = -7691442849725668470LL;
short var_2 = (short)-18560;
signed char var_3 = (signed char)125;
signed char var_7 = (signed char)108;
unsigned char var_8 = (unsigned char)220;
unsigned long long int var_11 = 11571139830391506675ULL;
int zero = 0;
signed char var_13 = (signed char)126;
long long int var_14 = -7989995686996067886LL;
unsigned int var_15 = 2180668502U;
void init() {
}

void checksum() {
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
