#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
unsigned short var_1 = (unsigned short)30677;
unsigned long long int var_3 = 289900862597760121ULL;
unsigned short var_4 = (unsigned short)44927;
_Bool var_7 = (_Bool)0;
long long int var_8 = -5716965364079615101LL;
long long int var_9 = -1316213553265568279LL;
unsigned short var_10 = (unsigned short)54996;
int zero = 0;
signed char var_12 = (signed char)97;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-12;
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
