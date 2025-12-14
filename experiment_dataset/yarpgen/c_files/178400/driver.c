#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17523;
signed char var_2 = (signed char)1;
int var_3 = 154641796;
int var_4 = 227736480;
signed char var_5 = (signed char)20;
int var_7 = 1752578246;
unsigned int var_9 = 2910850907U;
unsigned char var_10 = (unsigned char)241;
int zero = 0;
unsigned int var_11 = 2838704832U;
signed char var_12 = (signed char)83;
unsigned int var_13 = 4004796552U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
