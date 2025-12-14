#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 899979217U;
int var_6 = -1160798274;
unsigned short var_8 = (unsigned short)51545;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)43390;
int var_12 = 680629148;
short var_15 = (short)-27198;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = -343431062;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
