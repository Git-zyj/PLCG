#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_9 = (unsigned short)6395;
long long int var_11 = -231859055878083944LL;
unsigned char var_15 = (unsigned char)249;
int zero = 0;
unsigned int var_16 = 1649601093U;
unsigned short var_17 = (unsigned short)33083;
unsigned long long int var_18 = 5974796440316059411ULL;
void init() {
}

void checksum() {
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
