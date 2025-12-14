#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2936;
unsigned long long int var_4 = 8705855308379357353ULL;
signed char var_7 = (signed char)91;
int var_8 = -626581039;
unsigned long long int var_11 = 11220075601030725954ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)49;
_Bool var_13 = (_Bool)1;
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
