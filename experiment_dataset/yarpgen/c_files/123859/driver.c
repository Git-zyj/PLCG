#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18739;
long long int var_2 = 3719189590895663423LL;
signed char var_3 = (signed char)-67;
signed char var_15 = (signed char)98;
int zero = 0;
short var_16 = (short)-14937;
short var_17 = (short)7752;
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
