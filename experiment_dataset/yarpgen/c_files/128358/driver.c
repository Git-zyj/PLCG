#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54389;
signed char var_3 = (signed char)-115;
signed char var_9 = (signed char)43;
signed char var_10 = (signed char)-100;
unsigned char var_11 = (unsigned char)30;
long long int var_12 = -6724399580068654492LL;
long long int var_16 = -2502994603788546707LL;
unsigned char var_17 = (unsigned char)16;
int zero = 0;
unsigned short var_20 = (unsigned short)40084;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1368418116U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
