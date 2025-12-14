#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5763134272238937601LL;
int var_8 = 926967556;
unsigned short var_10 = (unsigned short)53531;
int var_12 = -2146925152;
unsigned int var_13 = 242774838U;
unsigned char var_14 = (unsigned char)120;
int zero = 0;
unsigned char var_16 = (unsigned char)161;
unsigned int var_17 = 2589940033U;
void init() {
}

void checksum() {
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
