#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1976403730;
short var_4 = (short)27782;
short var_7 = (short)-21063;
int zero = 0;
unsigned char var_13 = (unsigned char)216;
unsigned int var_14 = 3775400144U;
long long int var_15 = 8186017771649292590LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
