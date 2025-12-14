#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 702485668;
unsigned short var_3 = (unsigned short)11862;
int var_4 = 1469281027;
unsigned char var_9 = (unsigned char)52;
int zero = 0;
signed char var_12 = (signed char)-32;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-10;
int var_15 = -538960791;
signed char var_16 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
