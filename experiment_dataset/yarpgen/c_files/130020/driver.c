#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_10 = (unsigned short)41403;
unsigned short var_12 = (unsigned short)22309;
unsigned char var_13 = (unsigned char)60;
unsigned long long int var_14 = 9813763408131873312ULL;
int zero = 0;
unsigned long long int var_16 = 5195320800229063353ULL;
unsigned long long int var_17 = 10119519512022736239ULL;
signed char var_18 = (signed char)-5;
unsigned short var_19 = (unsigned short)34909;
void init() {
}

void checksum() {
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
