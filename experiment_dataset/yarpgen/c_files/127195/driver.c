#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3050395631482922433ULL;
unsigned short var_2 = (unsigned short)1855;
unsigned int var_3 = 2258180240U;
unsigned char var_4 = (unsigned char)79;
_Bool var_11 = (_Bool)1;
long long int var_14 = 8432371049775893528LL;
unsigned char var_15 = (unsigned char)35;
int zero = 0;
long long int var_17 = -3233983273714574446LL;
long long int var_18 = 652244884193086777LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
