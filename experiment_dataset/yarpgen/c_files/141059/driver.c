#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)216;
short var_8 = (short)14540;
_Bool var_9 = (_Bool)0;
short var_10 = (short)2813;
_Bool var_11 = (_Bool)1;
int var_12 = 1071815984;
unsigned int var_13 = 3042684456U;
int var_14 = -449340977;
int zero = 0;
int var_16 = 701348753;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
