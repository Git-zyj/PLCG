#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)131;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-12665;
unsigned short var_9 = (unsigned short)52479;
unsigned int var_15 = 2364403307U;
long long int var_16 = -3555208568906378160LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5089804990398853807LL;
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
