#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 2975836797U;
unsigned long long int var_3 = 4080720435419411519ULL;
unsigned char var_4 = (unsigned char)237;
unsigned int var_5 = 626908833U;
unsigned char var_7 = (unsigned char)49;
long long int var_8 = -6050396235974065389LL;
long long int var_11 = -178625290618926828LL;
long long int var_12 = 9143509912707108898LL;
int zero = 0;
unsigned char var_13 = (unsigned char)105;
long long int var_14 = 6661824032155517615LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
