#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16366;
short var_1 = (short)19530;
signed char var_3 = (signed char)-22;
unsigned int var_5 = 296781894U;
int var_6 = 1108438211;
long long int var_7 = -6628758244210649653LL;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-29798;
int zero = 0;
unsigned char var_12 = (unsigned char)44;
unsigned short var_13 = (unsigned short)58267;
short var_14 = (short)-9271;
long long int var_15 = 2361114365944623080LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
