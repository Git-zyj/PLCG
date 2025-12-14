#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1708251555U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_12 = 17907450605965485846ULL;
unsigned long long int var_16 = 499101676892764245ULL;
unsigned char var_17 = (unsigned char)203;
long long int var_18 = 4796499736386816826LL;
int zero = 0;
unsigned short var_20 = (unsigned short)31697;
_Bool var_21 = (_Bool)0;
int var_22 = -1687404369;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
