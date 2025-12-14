#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18529;
unsigned int var_1 = 2755350902U;
unsigned long long int var_8 = 260185572871913642ULL;
unsigned int var_9 = 2165620882U;
unsigned char var_10 = (unsigned char)178;
unsigned char var_11 = (unsigned char)129;
unsigned long long int var_15 = 15547663545449898204ULL;
unsigned long long int var_17 = 3264053578741656631ULL;
int zero = 0;
unsigned int var_18 = 1441692890U;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)13;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
