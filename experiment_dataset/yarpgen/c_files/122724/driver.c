#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_6 = -113931552;
unsigned short var_9 = (unsigned short)30062;
int var_10 = 1077029322;
int zero = 0;
unsigned int var_15 = 3171554967U;
signed char var_16 = (signed char)-123;
unsigned int var_17 = 1826309232U;
void init() {
}

void checksum() {
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
