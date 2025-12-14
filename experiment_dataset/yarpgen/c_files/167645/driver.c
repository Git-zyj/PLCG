#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
int var_2 = 1896643041;
unsigned char var_3 = (unsigned char)80;
int var_4 = -1734281286;
unsigned char var_7 = (unsigned char)248;
unsigned char var_8 = (unsigned char)108;
int zero = 0;
short var_13 = (short)7817;
int var_14 = 353157896;
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
