#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3853344544114545128LL;
unsigned short var_8 = (unsigned short)50803;
short var_15 = (short)-28290;
int zero = 0;
long long int var_18 = -4861888618356411240LL;
short var_19 = (short)22354;
short var_20 = (short)28285;
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
