#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2235649924U;
unsigned int var_3 = 1277567869U;
unsigned int var_4 = 1913367196U;
unsigned int var_7 = 3511585473U;
int zero = 0;
unsigned int var_16 = 4070073931U;
unsigned int var_17 = 1622842189U;
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
