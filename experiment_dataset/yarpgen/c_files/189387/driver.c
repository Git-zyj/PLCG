#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)7044;
long long int var_14 = 4389244643216823018LL;
unsigned short var_16 = (unsigned short)22790;
int var_17 = -263224741;
int zero = 0;
int var_19 = 1494329728;
unsigned char var_20 = (unsigned char)174;
unsigned char var_21 = (unsigned char)159;
void init() {
}

void checksum() {
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
