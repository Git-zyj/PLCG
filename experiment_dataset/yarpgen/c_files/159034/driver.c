#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 404946258;
unsigned long long int var_1 = 2146886516268746910ULL;
unsigned short var_4 = (unsigned short)4446;
unsigned char var_7 = (unsigned char)228;
short var_8 = (short)29784;
int var_10 = 1856010351;
unsigned long long int var_12 = 6027832072553877302ULL;
unsigned int var_15 = 3747118841U;
_Bool var_16 = (_Bool)1;
int var_18 = -660630009;
int zero = 0;
unsigned long long int var_20 = 3006487642730710119ULL;
unsigned short var_21 = (unsigned short)475;
unsigned char var_22 = (unsigned char)255;
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
