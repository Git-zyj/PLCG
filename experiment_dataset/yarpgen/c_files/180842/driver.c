#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)35905;
unsigned short var_14 = (unsigned short)2039;
signed char var_15 = (signed char)40;
int zero = 0;
int var_16 = -65826225;
unsigned long long int var_17 = 3218596677800994576ULL;
long long int var_18 = 8119158676906469034LL;
unsigned long long int var_19 = 10219797597553275958ULL;
void init() {
}

void checksum() {
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
