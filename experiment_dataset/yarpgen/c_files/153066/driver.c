#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34506;
unsigned long long int var_3 = 16195128136379990702ULL;
unsigned int var_8 = 3695595173U;
unsigned short var_12 = (unsigned short)13896;
int zero = 0;
unsigned long long int var_19 = 4695335317700981953ULL;
unsigned int var_20 = 2693654930U;
unsigned long long int var_21 = 12831600139523986727ULL;
void init() {
}

void checksum() {
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
