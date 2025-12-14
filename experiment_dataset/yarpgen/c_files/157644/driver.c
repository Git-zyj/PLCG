#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2630879612672772449LL;
unsigned int var_1 = 2606290457U;
unsigned char var_2 = (unsigned char)249;
short var_3 = (short)-4055;
short var_5 = (short)-11943;
short var_6 = (short)32764;
int zero = 0;
short var_17 = (short)29755;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-19742;
signed char var_20 = (signed char)86;
void init() {
}

void checksum() {
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
