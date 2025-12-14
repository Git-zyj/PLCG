#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
unsigned char var_2 = (unsigned char)152;
int var_5 = -860579862;
unsigned char var_6 = (unsigned char)33;
unsigned long long int var_8 = 10976324817677192528ULL;
short var_9 = (short)-18509;
_Bool var_10 = (_Bool)1;
unsigned long long int var_15 = 5695074253963221591ULL;
int zero = 0;
signed char var_16 = (signed char)63;
int var_17 = -1736590149;
unsigned char var_18 = (unsigned char)125;
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
