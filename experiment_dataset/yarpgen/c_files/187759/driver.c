#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8645020721920714180LL;
long long int var_1 = 7664748653119639444LL;
unsigned int var_3 = 253951294U;
_Bool var_4 = (_Bool)1;
int var_5 = 845103097;
int var_6 = 265389454;
signed char var_8 = (signed char)-109;
unsigned short var_9 = (unsigned short)972;
int zero = 0;
int var_11 = -951366383;
unsigned char var_12 = (unsigned char)98;
unsigned short var_13 = (unsigned short)42626;
long long int var_14 = 5928209562824767402LL;
_Bool var_15 = (_Bool)0;
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
