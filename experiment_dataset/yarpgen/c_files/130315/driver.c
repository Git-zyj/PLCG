#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
long long int var_4 = -41381356654382414LL;
unsigned char var_6 = (unsigned char)74;
long long int var_9 = 303926999402439001LL;
int var_11 = 1848498372;
unsigned short var_14 = (unsigned short)16208;
int zero = 0;
unsigned int var_15 = 1356716872U;
unsigned short var_16 = (unsigned short)34467;
unsigned long long int var_17 = 7239508394232128727ULL;
_Bool var_18 = (_Bool)0;
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
