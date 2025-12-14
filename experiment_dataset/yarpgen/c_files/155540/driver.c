#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6911067348714390873ULL;
unsigned long long int var_3 = 1096281942141016089ULL;
unsigned short var_5 = (unsigned short)8935;
unsigned int var_7 = 2686565435U;
_Bool var_8 = (_Bool)1;
long long int var_9 = -9144074223400323305LL;
unsigned int var_11 = 4283372067U;
unsigned char var_16 = (unsigned char)254;
int zero = 0;
unsigned short var_19 = (unsigned short)58400;
unsigned int var_20 = 2309554913U;
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
