#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)35;
unsigned short var_13 = (unsigned short)31372;
unsigned int var_14 = 4206287110U;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)255;
unsigned short var_18 = (unsigned short)41470;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
