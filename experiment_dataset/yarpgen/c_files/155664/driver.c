#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 822741046;
unsigned short var_4 = (unsigned short)42245;
long long int var_6 = -4209496105864296167LL;
unsigned int var_8 = 1400273141U;
long long int var_10 = -6535761085149973135LL;
unsigned char var_13 = (unsigned char)208;
int zero = 0;
short var_14 = (short)29166;
unsigned char var_15 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
