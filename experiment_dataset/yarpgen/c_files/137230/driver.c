#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2972428161263540259LL;
int var_8 = 1635980618;
signed char var_11 = (signed char)41;
int var_12 = -526341890;
signed char var_15 = (signed char)0;
unsigned char var_16 = (unsigned char)23;
int zero = 0;
unsigned int var_17 = 193986911U;
unsigned long long int var_18 = 12427390602226701129ULL;
void init() {
}

void checksum() {
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
