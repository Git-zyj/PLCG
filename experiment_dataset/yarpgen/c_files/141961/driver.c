#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-81;
int var_4 = -1157268125;
unsigned long long int var_12 = 3087454611592410760ULL;
int zero = 0;
signed char var_16 = (signed char)111;
unsigned short var_17 = (unsigned short)14270;
unsigned int var_18 = 2367477998U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
