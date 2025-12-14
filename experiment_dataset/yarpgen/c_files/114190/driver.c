#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11102;
signed char var_1 = (signed char)0;
unsigned short var_2 = (unsigned short)58181;
unsigned char var_4 = (unsigned char)87;
int zero = 0;
unsigned short var_12 = (unsigned short)41671;
unsigned short var_13 = (unsigned short)52903;
unsigned long long int var_14 = 12402253394365222727ULL;
signed char var_15 = (signed char)53;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
