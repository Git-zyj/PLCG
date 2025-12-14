#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
unsigned int var_1 = 2443564268U;
unsigned int var_3 = 726525779U;
long long int var_4 = 4209125868899608727LL;
long long int var_6 = -2382699177803595010LL;
unsigned short var_8 = (unsigned short)38145;
unsigned short var_11 = (unsigned short)43956;
unsigned int var_13 = 3553208938U;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1892734887U;
unsigned char var_17 = (unsigned char)155;
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
