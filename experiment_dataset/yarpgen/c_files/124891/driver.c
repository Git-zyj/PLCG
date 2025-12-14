#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)222;
unsigned int var_8 = 3501458632U;
signed char var_9 = (signed char)-25;
int zero = 0;
unsigned int var_15 = 204849723U;
short var_16 = (short)17540;
long long int var_17 = 8834438523725901078LL;
unsigned int var_18 = 1713840235U;
int var_19 = 1272173199;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
