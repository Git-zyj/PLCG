#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)(-127 - 1);
int var_2 = 1505915177;
int var_5 = -2073957313;
signed char var_7 = (signed char)23;
unsigned char var_8 = (unsigned char)133;
int zero = 0;
int var_10 = 1225827693;
int var_11 = -434433273;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
