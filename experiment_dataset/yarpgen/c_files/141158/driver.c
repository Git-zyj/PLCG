#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-102;
signed char var_1 = (signed char)48;
unsigned char var_2 = (unsigned char)123;
unsigned int var_3 = 3978273440U;
unsigned char var_6 = (unsigned char)234;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 500537803U;
int zero = 0;
short var_13 = (short)-30833;
signed char var_14 = (signed char)-6;
_Bool var_15 = (_Bool)1;
int var_16 = -671120437;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
