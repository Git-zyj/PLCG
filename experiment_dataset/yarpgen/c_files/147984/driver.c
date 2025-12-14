#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2278218459U;
short var_13 = (short)-22039;
unsigned short var_15 = (unsigned short)29892;
int zero = 0;
unsigned char var_18 = (unsigned char)23;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 9354969967981867373ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
