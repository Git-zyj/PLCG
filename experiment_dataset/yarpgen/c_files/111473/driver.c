#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)214;
unsigned char var_5 = (unsigned char)2;
int var_7 = 984557763;
unsigned short var_9 = (unsigned short)54985;
unsigned short var_12 = (unsigned short)44955;
long long int var_15 = -1978459724547811554LL;
int zero = 0;
unsigned char var_17 = (unsigned char)208;
unsigned int var_18 = 1427518943U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
