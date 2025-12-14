#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
unsigned short var_10 = (unsigned short)63493;
long long int var_16 = -8723819436427957057LL;
unsigned short var_17 = (unsigned short)54452;
signed char var_18 = (signed char)10;
unsigned short var_19 = (unsigned short)13970;
int zero = 0;
unsigned long long int var_20 = 17751325898125540761ULL;
short var_21 = (short)22864;
unsigned long long int var_22 = 17149309184116173803ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
