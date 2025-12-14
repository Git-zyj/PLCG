#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 180293548U;
short var_1 = (short)-23208;
unsigned int var_2 = 3811030342U;
unsigned short var_3 = (unsigned short)2080;
unsigned char var_4 = (unsigned char)199;
unsigned int var_8 = 3765469519U;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)106;
unsigned short var_12 = (unsigned short)41905;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 493981958053786246ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
