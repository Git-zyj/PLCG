#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8342638687994182160ULL;
short var_4 = (short)3320;
short var_9 = (short)2571;
short var_11 = (short)25594;
short var_15 = (short)-8544;
int zero = 0;
short var_17 = (short)452;
short var_18 = (short)-10473;
int var_19 = -1104743604;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
