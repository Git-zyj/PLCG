#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17490353641471407771ULL;
unsigned int var_5 = 1986028370U;
_Bool var_6 = (_Bool)0;
int var_8 = -526247073;
int var_9 = 1749121237;
long long int var_11 = -890113174323426461LL;
short var_15 = (short)-8025;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 1965410020;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
