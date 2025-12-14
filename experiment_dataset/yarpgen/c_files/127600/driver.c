#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2122555203U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1145316882U;
signed char var_6 = (signed char)60;
unsigned char var_7 = (unsigned char)240;
unsigned short var_8 = (unsigned short)31456;
unsigned short var_9 = (unsigned short)50970;
unsigned int var_10 = 2540085701U;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 237598378U;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = -4336781475540530815LL;
unsigned char var_15 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
