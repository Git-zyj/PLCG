#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)29833;
unsigned long long int var_14 = 5009362544515470073ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)2;
unsigned char var_18 = (unsigned char)40;
long long int var_19 = -604493733489814794LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
