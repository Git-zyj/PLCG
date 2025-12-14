#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5652832903218368403LL;
unsigned long long int var_2 = 17517920902620076574ULL;
short var_3 = (short)-14537;
unsigned short var_8 = (unsigned short)42672;
unsigned int var_11 = 1240504516U;
unsigned int var_12 = 3015129434U;
long long int var_16 = 2317391538190387704LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
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
