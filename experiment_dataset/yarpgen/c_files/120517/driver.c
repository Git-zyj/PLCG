#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 402263977U;
unsigned long long int var_6 = 4051314045187008762ULL;
long long int var_7 = -2769574755165263349LL;
short var_8 = (short)-28145;
int zero = 0;
short var_10 = (short)-16706;
unsigned short var_11 = (unsigned short)21967;
unsigned long long int var_12 = 13204023421763379834ULL;
unsigned long long int var_13 = 13184445863956566396ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
