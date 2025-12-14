#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_9 = 5876592575254424168LL;
unsigned short var_14 = (unsigned short)58631;
long long int var_15 = 6293033385357802225LL;
unsigned int var_17 = 2711271953U;
unsigned char var_18 = (unsigned char)84;
int zero = 0;
unsigned long long int var_19 = 5977680676483092192ULL;
unsigned char var_20 = (unsigned char)195;
void init() {
}

void checksum() {
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
