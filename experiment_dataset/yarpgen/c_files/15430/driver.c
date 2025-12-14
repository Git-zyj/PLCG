#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30720;
long long int var_10 = 7288650208745475190LL;
unsigned char var_14 = (unsigned char)92;
int zero = 0;
unsigned char var_15 = (unsigned char)32;
signed char var_16 = (signed char)121;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
