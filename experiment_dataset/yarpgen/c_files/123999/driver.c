#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3141215009U;
int var_3 = 1048367198;
unsigned char var_11 = (unsigned char)67;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-3;
unsigned short var_17 = (unsigned short)19376;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
