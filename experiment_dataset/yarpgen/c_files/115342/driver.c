#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53364;
short var_10 = (short)17614;
_Bool var_11 = (_Bool)0;
unsigned char var_14 = (unsigned char)125;
long long int var_16 = -7327463303606477789LL;
int zero = 0;
unsigned int var_17 = 2125384141U;
unsigned char var_18 = (unsigned char)44;
unsigned int var_19 = 2969037437U;
unsigned int var_20 = 3370911279U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
