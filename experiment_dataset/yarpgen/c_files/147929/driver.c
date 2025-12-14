#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 453538571;
int var_3 = -1349916823;
long long int var_5 = -6491566795406511840LL;
unsigned short var_6 = (unsigned short)20003;
signed char var_10 = (signed char)-22;
unsigned short var_12 = (unsigned short)60513;
int zero = 0;
int var_14 = 660682290;
short var_15 = (short)-20715;
unsigned long long int var_16 = 17079296884541008386ULL;
int var_17 = 198884631;
short var_18 = (short)-9259;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
