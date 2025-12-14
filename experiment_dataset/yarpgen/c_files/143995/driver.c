#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)104;
long long int var_7 = 2059905367061123570LL;
int var_8 = -407399712;
int var_10 = 840190885;
int zero = 0;
long long int var_11 = -803655010465098244LL;
int var_12 = 1219952952;
short var_13 = (short)-19127;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
