#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15193982821158698227ULL;
unsigned int var_6 = 4046641327U;
unsigned long long int var_8 = 9933328722282700584ULL;
signed char var_9 = (signed char)121;
int zero = 0;
unsigned char var_19 = (unsigned char)118;
unsigned char var_20 = (unsigned char)129;
unsigned char var_21 = (unsigned char)92;
short var_22 = (short)-27874;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
