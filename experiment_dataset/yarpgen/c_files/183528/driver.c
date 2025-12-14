#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 155388327;
unsigned long long int var_3 = 12580210872237045343ULL;
short var_11 = (short)-4862;
signed char var_16 = (signed char)110;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-9115;
int var_20 = -1825046425;
void init() {
}

void checksum() {
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
