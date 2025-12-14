#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)62576;
long long int var_10 = 4217842714969016553LL;
unsigned short var_12 = (unsigned short)7147;
unsigned int var_16 = 2372632375U;
unsigned long long int var_17 = 2378825950985296703ULL;
int zero = 0;
long long int var_20 = 325505748346863077LL;
unsigned long long int var_21 = 2436045999482213544ULL;
long long int var_22 = -6550275061958672862LL;
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
