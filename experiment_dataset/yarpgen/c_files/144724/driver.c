#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62188;
unsigned int var_4 = 4121520267U;
unsigned long long int var_7 = 9908788900354940210ULL;
unsigned char var_17 = (unsigned char)174;
unsigned int var_18 = 3981059175U;
int zero = 0;
unsigned long long int var_19 = 12562562484638047122ULL;
unsigned long long int var_20 = 15853728590935910704ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
