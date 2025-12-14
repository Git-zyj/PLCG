#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15180715902781519256ULL;
unsigned char var_5 = (unsigned char)82;
unsigned char var_9 = (unsigned char)29;
unsigned int var_11 = 3967215600U;
unsigned char var_14 = (unsigned char)125;
int zero = 0;
long long int var_15 = 3150432255149417834LL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1030217037445380300ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
