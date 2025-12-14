#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 797772423;
long long int var_3 = 7264738917949015937LL;
long long int var_4 = -3378042700129267627LL;
signed char var_5 = (signed char)-59;
unsigned int var_8 = 575275005U;
short var_9 = (short)-19685;
unsigned long long int var_10 = 3351165751609339617ULL;
int zero = 0;
long long int var_13 = -3227539565446499156LL;
unsigned char var_14 = (unsigned char)114;
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
