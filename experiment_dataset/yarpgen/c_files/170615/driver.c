#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-101;
unsigned char var_2 = (unsigned char)121;
long long int var_4 = 7496730970906672876LL;
unsigned char var_8 = (unsigned char)224;
long long int var_10 = 6182728460335302363LL;
int zero = 0;
unsigned char var_15 = (unsigned char)158;
int var_16 = -599413395;
long long int var_17 = -1800929580759814000LL;
unsigned char var_18 = (unsigned char)79;
unsigned char var_19 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
