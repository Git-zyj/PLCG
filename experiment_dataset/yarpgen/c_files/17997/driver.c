#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_10 = 7448314231011064790LL;
long long int var_11 = -2516450737964585376LL;
unsigned long long int var_12 = 777777420810833829ULL;
unsigned char var_14 = (unsigned char)66;
int zero = 0;
unsigned long long int var_15 = 13094661631904228227ULL;
unsigned long long int var_16 = 8677113060609743781ULL;
long long int var_17 = -3919774684924465623LL;
long long int var_18 = 2182239210742312870LL;
void init() {
}

void checksum() {
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
