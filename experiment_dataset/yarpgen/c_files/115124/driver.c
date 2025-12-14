#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2131970323U;
unsigned long long int var_3 = 7309498783060881048ULL;
unsigned short var_4 = (unsigned short)54462;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 5409945357241654762ULL;
long long int var_8 = -3424216826091422746LL;
signed char var_9 = (signed char)40;
int var_12 = 1190318731;
unsigned int var_14 = 1449541869U;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)35;
long long int var_18 = 7797027711363335490LL;
int var_19 = -147184697;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
