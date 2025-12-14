#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11930167856962954296ULL;
unsigned short var_1 = (unsigned short)8629;
unsigned short var_3 = (unsigned short)65498;
unsigned int var_5 = 811298982U;
int var_7 = -847995711;
unsigned char var_9 = (unsigned char)153;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15193339009451390858ULL;
unsigned int var_14 = 3366545407U;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
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
