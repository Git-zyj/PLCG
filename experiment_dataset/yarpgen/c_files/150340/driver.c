#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42092;
unsigned short var_3 = (unsigned short)58396;
unsigned short var_7 = (unsigned short)60724;
int zero = 0;
unsigned short var_13 = (unsigned short)4677;
unsigned short var_14 = (unsigned short)5947;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
