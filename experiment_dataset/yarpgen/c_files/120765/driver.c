#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2007608003;
unsigned short var_5 = (unsigned short)46957;
unsigned long long int var_6 = 17523135057504918963ULL;
unsigned long long int var_9 = 17952860811153047134ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)53;
int var_14 = 470059006;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
