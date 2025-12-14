#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)208;
unsigned char var_11 = (unsigned char)101;
unsigned int var_13 = 1057438699U;
long long int var_18 = -6791729141623705392LL;
int zero = 0;
long long int var_20 = 1622641932849393867LL;
unsigned short var_21 = (unsigned short)29560;
void init() {
}

void checksum() {
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
