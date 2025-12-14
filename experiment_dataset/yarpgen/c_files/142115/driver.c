#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1495249387130228316LL;
unsigned long long int var_7 = 1746046879079476725ULL;
unsigned char var_10 = (unsigned char)235;
unsigned long long int var_14 = 16831112380104356089ULL;
int zero = 0;
unsigned int var_20 = 3802037677U;
long long int var_21 = -933108493379643393LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
