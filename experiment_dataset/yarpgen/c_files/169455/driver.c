#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28874;
long long int var_1 = 3576881074897688163LL;
unsigned char var_3 = (unsigned char)113;
signed char var_8 = (signed char)-111;
long long int var_10 = 4887939172396580930LL;
long long int var_11 = 3944052782589962512LL;
int zero = 0;
long long int var_13 = -2917081660469306989LL;
short var_14 = (short)1484;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
