#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11639236372441312578ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)36498;
unsigned char var_7 = (unsigned char)201;
unsigned char var_9 = (unsigned char)147;
int zero = 0;
unsigned char var_10 = (unsigned char)88;
signed char var_11 = (signed char)102;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
