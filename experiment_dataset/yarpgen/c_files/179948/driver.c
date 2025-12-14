#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
long long int var_1 = -3936092810915879990LL;
signed char var_3 = (signed char)93;
unsigned long long int var_10 = 10245290641423279148ULL;
unsigned char var_18 = (unsigned char)232;
unsigned short var_19 = (unsigned short)62372;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 4259073462U;
unsigned int var_22 = 2766034702U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
