#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 216141720U;
int var_3 = -2042158998;
int var_7 = 96818523;
int var_9 = 2123093670;
unsigned int var_12 = 34417763U;
unsigned int var_13 = 3665362895U;
short var_14 = (short)13500;
int zero = 0;
long long int var_16 = 8884363575413541475LL;
unsigned int var_17 = 4088115284U;
void init() {
}

void checksum() {
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
