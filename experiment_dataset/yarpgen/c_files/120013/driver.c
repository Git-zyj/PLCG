#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-69;
unsigned int var_4 = 1192312121U;
int var_8 = -459002500;
unsigned char var_11 = (unsigned char)92;
int zero = 0;
long long int var_13 = -8098700698438967656LL;
signed char var_14 = (signed char)21;
unsigned char var_15 = (unsigned char)133;
short var_16 = (short)-21854;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
