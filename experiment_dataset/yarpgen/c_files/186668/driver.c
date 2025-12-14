#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)31857;
unsigned long long int var_4 = 15277202686009455355ULL;
unsigned char var_5 = (unsigned char)245;
unsigned short var_9 = (unsigned short)58157;
unsigned char var_10 = (unsigned char)218;
int var_11 = -1101521870;
int zero = 0;
long long int var_12 = 3384916167520716005LL;
unsigned short var_13 = (unsigned short)54331;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
