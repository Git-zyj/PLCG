#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34334;
unsigned short var_5 = (unsigned short)6402;
short var_9 = (short)-3444;
int zero = 0;
unsigned int var_10 = 1547214460U;
long long int var_11 = -6623999793323078466LL;
int var_12 = 324304035;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
