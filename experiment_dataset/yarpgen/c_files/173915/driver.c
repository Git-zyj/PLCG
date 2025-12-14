#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3791625962023520449LL;
long long int var_3 = 5197542866602252082LL;
unsigned long long int var_7 = 11063361380496740729ULL;
int var_8 = 2119205300;
int var_10 = 586952612;
unsigned char var_12 = (unsigned char)29;
unsigned long long int var_13 = 16132715618543795860ULL;
int zero = 0;
long long int var_14 = 7208665276505072187LL;
unsigned char var_15 = (unsigned char)98;
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
