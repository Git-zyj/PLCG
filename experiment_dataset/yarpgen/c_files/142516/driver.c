#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -98289413689235772LL;
int var_10 = 32014168;
int var_11 = 2040312012;
int var_18 = 640657809;
int var_19 = -1581006592;
int zero = 0;
signed char var_20 = (signed char)-127;
long long int var_21 = -7651731915976864361LL;
void init() {
}

void checksum() {
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
