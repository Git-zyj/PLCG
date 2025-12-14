#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
int var_1 = -1470675789;
int var_2 = 338285763;
long long int var_4 = -2555575805805039391LL;
long long int var_6 = 7341224566411684096LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3229963170U;
int var_9 = 683573885;
unsigned char var_10 = (unsigned char)115;
int zero = 0;
long long int var_12 = -7507626924504357560LL;
unsigned short var_13 = (unsigned short)58924;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
