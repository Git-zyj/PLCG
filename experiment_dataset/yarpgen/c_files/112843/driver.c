#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_8 = (unsigned short)22910;
unsigned long long int var_9 = 18190958774763861392ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 2938838962U;
unsigned int var_17 = 2464068568U;
unsigned short var_19 = (unsigned short)28252;
int zero = 0;
unsigned int var_20 = 1757799816U;
unsigned int var_21 = 2249930547U;
short var_22 = (short)-14561;
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
