#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18094;
int var_4 = -1603681355;
unsigned int var_6 = 1657348030U;
int var_8 = 1233373898;
unsigned char var_11 = (unsigned char)114;
int zero = 0;
unsigned char var_12 = (unsigned char)30;
_Bool var_13 = (_Bool)1;
long long int var_14 = 5982687312038720001LL;
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
