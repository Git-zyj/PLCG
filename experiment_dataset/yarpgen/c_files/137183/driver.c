#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1384160209U;
long long int var_3 = -7166947547208936088LL;
signed char var_4 = (signed char)32;
unsigned short var_11 = (unsigned short)54798;
unsigned short var_12 = (unsigned short)36737;
int zero = 0;
short var_13 = (short)28466;
signed char var_14 = (signed char)-16;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3391596162U;
unsigned long long int var_17 = 5123082680282827068ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
