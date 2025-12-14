#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-4198;
short var_3 = (short)1146;
short var_4 = (short)9805;
unsigned int var_5 = 4007762676U;
short var_9 = (short)3450;
short var_11 = (short)32025;
unsigned long long int var_15 = 17344088445160205623ULL;
int zero = 0;
short var_16 = (short)-10487;
long long int var_17 = -229995347266356315LL;
short var_18 = (short)26468;
short var_19 = (short)-11386;
short var_20 = (short)-17271;
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
