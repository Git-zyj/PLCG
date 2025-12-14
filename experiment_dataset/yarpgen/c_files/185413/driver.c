#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59759;
signed char var_1 = (signed char)0;
int var_4 = -656708297;
long long int var_5 = -4925938002800776520LL;
unsigned short var_6 = (unsigned short)57535;
unsigned int var_8 = 4002152611U;
unsigned int var_9 = 495324826U;
int zero = 0;
short var_10 = (short)-27658;
unsigned int var_11 = 558435335U;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-19512;
int var_14 = 1213230242;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
