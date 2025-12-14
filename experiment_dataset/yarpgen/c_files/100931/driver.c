#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 651335417;
unsigned int var_3 = 866526425U;
unsigned char var_4 = (unsigned char)168;
unsigned char var_5 = (unsigned char)164;
int zero = 0;
unsigned long long int var_10 = 16483548842656479550ULL;
int var_11 = 599926763;
signed char var_12 = (signed char)16;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
