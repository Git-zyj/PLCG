#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4248558557U;
unsigned int var_2 = 3780175906U;
unsigned long long int var_5 = 17411019273627578065ULL;
unsigned int var_8 = 1799497118U;
unsigned short var_12 = (unsigned short)59360;
signed char var_14 = (signed char)41;
int zero = 0;
unsigned int var_18 = 1911707007U;
unsigned long long int var_19 = 13973596328140098074ULL;
signed char var_20 = (signed char)4;
unsigned int var_21 = 83958933U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
