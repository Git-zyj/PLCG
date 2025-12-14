#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22641;
unsigned int var_2 = 1328000183U;
unsigned short var_5 = (unsigned short)8802;
unsigned short var_7 = (unsigned short)37802;
unsigned int var_8 = 1648806771U;
unsigned int var_10 = 2721572196U;
unsigned short var_11 = (unsigned short)24358;
unsigned int var_15 = 2220702721U;
int zero = 0;
unsigned int var_18 = 2274702512U;
unsigned int var_19 = 1212332826U;
void init() {
}

void checksum() {
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
