#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12489;
short var_6 = (short)-25982;
long long int var_10 = 1150842976659964174LL;
long long int var_11 = -4132860868384634363LL;
int zero = 0;
long long int var_14 = -5413854774270969633LL;
short var_15 = (short)14090;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
