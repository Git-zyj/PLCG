#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1480653111;
unsigned int var_2 = 3886333115U;
unsigned int var_6 = 2338276610U;
_Bool var_7 = (_Bool)0;
int var_12 = -854712813;
int var_14 = 154573239;
int var_15 = 1112577762;
int zero = 0;
unsigned char var_16 = (unsigned char)241;
unsigned short var_17 = (unsigned short)57102;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
