#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6860563118201665690ULL;
unsigned long long int var_2 = 18085892298335917554ULL;
int var_3 = -1988539679;
long long int var_5 = -7791106077951715425LL;
signed char var_17 = (signed char)63;
int zero = 0;
int var_18 = -505396278;
int var_19 = 2057315251;
unsigned short var_20 = (unsigned short)38801;
int var_21 = 896232603;
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
