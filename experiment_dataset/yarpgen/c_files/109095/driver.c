#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 327886934U;
unsigned int var_4 = 2171838610U;
signed char var_5 = (signed char)43;
unsigned char var_9 = (unsigned char)60;
_Bool var_13 = (_Bool)1;
unsigned char var_17 = (unsigned char)24;
int zero = 0;
unsigned char var_18 = (unsigned char)50;
short var_19 = (short)763;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
