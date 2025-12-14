#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14283;
int var_8 = -1813051667;
unsigned char var_9 = (unsigned char)185;
short var_10 = (short)28493;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 11300287094605732779ULL;
int zero = 0;
int var_15 = -1970844011;
int var_16 = -662902861;
unsigned long long int var_17 = 17895323803802351999ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
