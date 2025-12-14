#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_8 = (short)8746;
int var_9 = 1393555710;
unsigned int var_11 = 1988210028U;
unsigned int var_15 = 2577476733U;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
unsigned short var_20 = (unsigned short)29787;
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
