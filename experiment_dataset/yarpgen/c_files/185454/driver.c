#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)21869;
unsigned char var_12 = (unsigned char)42;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 256624658U;
int zero = 0;
unsigned int var_19 = 634478480U;
short var_20 = (short)-5578;
void init() {
}

void checksum() {
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
