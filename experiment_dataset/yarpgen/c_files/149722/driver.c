#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1495107495U;
unsigned char var_1 = (unsigned char)132;
int var_2 = 2086950550;
unsigned char var_3 = (unsigned char)255;
unsigned char var_5 = (unsigned char)12;
unsigned char var_6 = (unsigned char)82;
long long int var_7 = -1913431225986988343LL;
unsigned char var_8 = (unsigned char)104;
unsigned char var_9 = (unsigned char)51;
unsigned int var_10 = 140655487U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2406868163U;
_Bool var_15 = (_Bool)1;
long long int var_16 = 3381691241742893905LL;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
