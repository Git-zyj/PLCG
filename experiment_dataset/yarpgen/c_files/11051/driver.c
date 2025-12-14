#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46317;
short var_3 = (short)-23883;
signed char var_4 = (signed char)-30;
unsigned long long int var_5 = 9249125231747926660ULL;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_9 = 1214025249972101750LL;
int var_10 = -290413993;
unsigned int var_12 = 459734165U;
unsigned short var_15 = (unsigned short)22818;
unsigned char var_16 = (unsigned char)231;
int zero = 0;
unsigned long long int var_20 = 8962310117692355118ULL;
long long int var_21 = -8391286968833718688LL;
unsigned short var_22 = (unsigned short)36175;
int var_23 = 626955454;
unsigned char var_24 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
