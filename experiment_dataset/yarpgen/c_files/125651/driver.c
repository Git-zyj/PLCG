#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3933752087U;
short var_3 = (short)12463;
short var_6 = (short)12632;
unsigned int var_8 = 889103408U;
int zero = 0;
short var_10 = (short)13270;
unsigned int var_11 = 3691091113U;
unsigned int var_12 = 1698721665U;
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
