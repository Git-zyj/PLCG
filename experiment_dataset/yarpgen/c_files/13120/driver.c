#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43624;
unsigned int var_5 = 3373755761U;
signed char var_16 = (signed char)7;
int zero = 0;
unsigned int var_20 = 1452685272U;
int var_21 = 988040917;
unsigned short var_22 = (unsigned short)20331;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
