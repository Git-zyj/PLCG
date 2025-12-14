#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4801;
unsigned short var_2 = (unsigned short)58263;
unsigned char var_4 = (unsigned char)201;
unsigned long long int var_11 = 8523857541647271943ULL;
unsigned long long int var_13 = 17741166025723501332ULL;
unsigned char var_14 = (unsigned char)123;
int zero = 0;
long long int var_16 = -9012311894790121572LL;
long long int var_17 = 6195824808140836543LL;
void init() {
}

void checksum() {
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
