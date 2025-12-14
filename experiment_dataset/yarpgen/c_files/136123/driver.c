#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
_Bool var_9 = (_Bool)1;
int var_12 = -202383950;
unsigned short var_13 = (unsigned short)59256;
int var_14 = 1496617100;
int zero = 0;
unsigned int var_15 = 2083912795U;
unsigned char var_16 = (unsigned char)175;
unsigned char var_17 = (unsigned char)105;
unsigned char var_18 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
