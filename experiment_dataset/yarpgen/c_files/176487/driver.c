#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)12;
int var_2 = 293255831;
unsigned char var_5 = (unsigned char)225;
long long int var_6 = 8616715130385649897LL;
signed char var_10 = (signed char)-51;
long long int var_13 = 7995374759925721355LL;
int zero = 0;
short var_17 = (short)19030;
unsigned long long int var_18 = 9923938763062208956ULL;
unsigned short var_19 = (unsigned short)18657;
short var_20 = (short)-15430;
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
