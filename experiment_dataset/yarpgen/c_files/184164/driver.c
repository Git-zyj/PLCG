#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11529367509854551043ULL;
unsigned char var_4 = (unsigned char)244;
unsigned int var_8 = 2922647804U;
int zero = 0;
int var_13 = 1722693984;
unsigned short var_14 = (unsigned short)24539;
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
