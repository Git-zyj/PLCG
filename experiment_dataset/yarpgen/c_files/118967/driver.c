#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-203;
unsigned long long int var_2 = 15332150201784043211ULL;
short var_3 = (short)-30302;
unsigned long long int var_6 = 18414384783015202075ULL;
int var_17 = 164760610;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 175023112U;
int var_21 = -1297334953;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
