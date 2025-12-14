#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3912517206107051273LL;
unsigned int var_10 = 1311693498U;
int zero = 0;
signed char var_12 = (signed char)50;
unsigned short var_13 = (unsigned short)64188;
unsigned short var_14 = (unsigned short)63426;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
