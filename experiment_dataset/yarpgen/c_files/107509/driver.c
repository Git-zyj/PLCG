#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4462000462963232605ULL;
unsigned short var_6 = (unsigned short)34764;
long long int var_8 = 3443714383559250329LL;
short var_11 = (short)-4480;
signed char var_13 = (signed char)5;
int var_15 = 415112252;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-12596;
signed char var_19 = (signed char)66;
unsigned short var_20 = (unsigned short)55699;
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
