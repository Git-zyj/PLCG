#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1497846794;
int var_12 = -433330713;
unsigned int var_13 = 1216409457U;
int zero = 0;
unsigned char var_18 = (unsigned char)92;
int var_19 = 928460452;
signed char var_20 = (signed char)20;
unsigned short var_21 = (unsigned short)8934;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
