#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -355621010778395326LL;
long long int var_4 = -105063219495557933LL;
signed char var_7 = (signed char)-63;
unsigned int var_8 = 2774602115U;
unsigned int var_12 = 3443361902U;
signed char var_14 = (signed char)-7;
int zero = 0;
signed char var_15 = (signed char)105;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-574;
unsigned char var_18 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
