#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)12609;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)44899;
unsigned int var_21 = 2710922572U;
long long int var_22 = 9014355590952832990LL;
unsigned char var_23 = (unsigned char)93;
short var_24 = (short)21236;
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
