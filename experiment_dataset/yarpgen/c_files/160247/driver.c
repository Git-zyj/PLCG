#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)128;
unsigned long long int var_5 = 3310098570985306410ULL;
unsigned short var_7 = (unsigned short)61737;
unsigned int var_8 = 4257091800U;
int zero = 0;
unsigned int var_12 = 4138255233U;
unsigned long long int var_13 = 2488044911584370724ULL;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
