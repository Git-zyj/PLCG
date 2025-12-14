#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1942445957U;
unsigned char var_4 = (unsigned char)134;
short var_7 = (short)17128;
unsigned int var_10 = 201385187U;
signed char var_11 = (signed char)-116;
unsigned short var_14 = (unsigned short)54106;
unsigned long long int var_15 = 14867670141366136775ULL;
int zero = 0;
long long int var_18 = -7127789879449918160LL;
unsigned long long int var_19 = 7327823618778744948ULL;
signed char var_20 = (signed char)-90;
long long int var_21 = 2492144349459669022LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
