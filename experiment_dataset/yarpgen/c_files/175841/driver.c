#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
long long int var_6 = 8892724571371829352LL;
unsigned long long int var_7 = 1711884541691269169ULL;
short var_8 = (short)24819;
unsigned char var_10 = (unsigned char)31;
int var_11 = -1380425578;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)13692;
unsigned char var_16 = (unsigned char)131;
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
