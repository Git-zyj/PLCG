#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17302148020608279430ULL;
unsigned short var_5 = (unsigned short)4572;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)33585;
unsigned long long int var_16 = 16277599762742561809ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)24787;
int var_19 = 1983003928;
void init() {
}

void checksum() {
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
