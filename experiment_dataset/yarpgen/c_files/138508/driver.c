#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1251926379U;
long long int var_8 = -5768779296891200788LL;
unsigned short var_9 = (unsigned short)13585;
int zero = 0;
short var_19 = (short)-2044;
short var_20 = (short)-23324;
long long int var_21 = 4393648690666839312LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
