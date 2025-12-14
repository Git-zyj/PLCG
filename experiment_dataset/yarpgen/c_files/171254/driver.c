#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6632;
int var_2 = 1562451719;
short var_3 = (short)25386;
short var_4 = (short)19801;
unsigned long long int var_5 = 10890421441268063749ULL;
short var_8 = (short)-30146;
unsigned char var_9 = (unsigned char)36;
unsigned long long int var_10 = 9437903652264101517ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)62978;
int zero = 0;
unsigned int var_13 = 1267566353U;
long long int var_14 = -1460549989218945955LL;
unsigned char var_15 = (unsigned char)89;
short var_16 = (short)3140;
unsigned int var_17 = 3165471421U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
