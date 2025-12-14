#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 3028454749946557169LL;
long long int var_13 = -6395026101161203629LL;
unsigned char var_15 = (unsigned char)238;
unsigned char var_17 = (unsigned char)17;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3562795758U;
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
