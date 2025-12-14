#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2854;
unsigned short var_2 = (unsigned short)9601;
unsigned char var_4 = (unsigned char)155;
signed char var_5 = (signed char)34;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)16990;
int zero = 0;
short var_14 = (short)-4056;
long long int var_15 = 8962485049136959507LL;
void init() {
}

void checksum() {
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
