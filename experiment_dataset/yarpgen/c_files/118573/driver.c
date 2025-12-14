#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
unsigned short var_1 = (unsigned short)54694;
_Bool var_4 = (_Bool)1;
unsigned long long int var_9 = 13499192306249691662ULL;
unsigned int var_10 = 625482860U;
int zero = 0;
int var_11 = -652555439;
unsigned int var_12 = 2901835856U;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)12;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
