#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 5974908507199684416ULL;
unsigned short var_3 = (unsigned short)29773;
unsigned short var_4 = (unsigned short)34027;
int var_13 = 1703159189;
unsigned long long int var_16 = 17507161348411987384ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)10444;
unsigned int var_18 = 2637897938U;
void init() {
}

void checksum() {
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
