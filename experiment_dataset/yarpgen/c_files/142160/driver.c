#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5809535946647798062LL;
unsigned short var_1 = (unsigned short)5626;
_Bool var_4 = (_Bool)0;
signed char var_11 = (signed char)-64;
unsigned char var_14 = (unsigned char)49;
int zero = 0;
unsigned short var_15 = (unsigned short)19807;
short var_16 = (short)19837;
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
