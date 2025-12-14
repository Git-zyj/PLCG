#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)92;
short var_6 = (short)-4917;
short var_9 = (short)30290;
short var_13 = (short)14037;
int zero = 0;
int var_14 = -817813031;
short var_15 = (short)-31836;
unsigned long long int var_16 = 3043597216969830300ULL;
unsigned short var_17 = (unsigned short)8867;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
