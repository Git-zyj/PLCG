#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1189800088U;
unsigned long long int var_9 = 16466834212919110144ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)133;
unsigned long long int var_13 = 16481465628487886182ULL;
int zero = 0;
long long int var_15 = 7826127455875037995LL;
unsigned char var_16 = (unsigned char)251;
short var_17 = (short)20141;
unsigned char var_18 = (unsigned char)8;
short var_19 = (short)-6141;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
