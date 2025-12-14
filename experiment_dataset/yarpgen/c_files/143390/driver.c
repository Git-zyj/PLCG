#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3914519953U;
unsigned char var_1 = (unsigned char)185;
unsigned long long int var_5 = 6827236321878795066ULL;
unsigned char var_6 = (unsigned char)232;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 11054162909383955505ULL;
unsigned short var_10 = (unsigned short)35743;
short var_11 = (short)9817;
long long int var_15 = -3309427735970603788LL;
int zero = 0;
unsigned int var_16 = 1941967786U;
unsigned char var_17 = (unsigned char)203;
long long int var_18 = 1962507957998699829LL;
short var_19 = (short)-28819;
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
