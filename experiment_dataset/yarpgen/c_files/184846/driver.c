#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8435;
unsigned long long int var_1 = 16592800454640818384ULL;
long long int var_2 = -4472095441195360977LL;
unsigned int var_5 = 3790813479U;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3593630645U;
unsigned long long int var_10 = 3317476652031599937ULL;
int zero = 0;
unsigned long long int var_14 = 7673042065778328503ULL;
unsigned char var_15 = (unsigned char)9;
void init() {
}

void checksum() {
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
