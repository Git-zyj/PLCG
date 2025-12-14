#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)237;
long long int var_8 = -4010251013828508140LL;
unsigned int var_9 = 3112579473U;
long long int var_12 = -5494849859636554148LL;
int zero = 0;
unsigned short var_16 = (unsigned short)7985;
signed char var_17 = (signed char)125;
unsigned int var_18 = 2385343503U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
