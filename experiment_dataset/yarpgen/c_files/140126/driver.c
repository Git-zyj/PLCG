#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3672522679U;
long long int var_4 = 7216245356696058616LL;
int var_7 = -809446044;
unsigned int var_8 = 675546936U;
unsigned int var_9 = 764687623U;
long long int var_10 = -2506901225088301267LL;
unsigned short var_12 = (unsigned short)21488;
int zero = 0;
unsigned int var_16 = 434081812U;
int var_17 = 1126439769;
int var_18 = -1006798472;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
