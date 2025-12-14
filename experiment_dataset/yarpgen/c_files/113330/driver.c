#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-102;
int var_8 = 782620667;
long long int var_9 = 7271883796555812793LL;
short var_11 = (short)30762;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
long long int var_13 = -5645251589092730857LL;
unsigned char var_14 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
