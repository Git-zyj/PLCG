#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
unsigned short var_3 = (unsigned short)53796;
unsigned long long int var_7 = 15456312679137533588ULL;
long long int var_8 = -5880739705840496774LL;
unsigned char var_9 = (unsigned char)162;
int zero = 0;
unsigned short var_13 = (unsigned short)54861;
unsigned char var_14 = (unsigned char)117;
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
