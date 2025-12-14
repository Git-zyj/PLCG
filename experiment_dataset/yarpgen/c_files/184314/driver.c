#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3628130511124204774ULL;
unsigned short var_10 = (unsigned short)2627;
int var_17 = -293670506;
int zero = 0;
unsigned short var_19 = (unsigned short)23448;
unsigned short var_20 = (unsigned short)13982;
unsigned long long int var_21 = 12923572997002075854ULL;
unsigned short var_22 = (unsigned short)23378;
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
