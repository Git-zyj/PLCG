#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)13070;
long long int var_6 = 7649575474694308356LL;
int var_9 = -545824454;
int zero = 0;
long long int var_12 = -6130482350462006454LL;
unsigned short var_13 = (unsigned short)41686;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
