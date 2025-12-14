#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18249;
int var_2 = 1352161211;
unsigned char var_3 = (unsigned char)127;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)32233;
unsigned long long int var_7 = 10328121603611154461ULL;
int var_10 = -493693404;
int var_11 = 1049641033;
int var_12 = 89770428;
int zero = 0;
unsigned short var_13 = (unsigned short)22011;
long long int var_14 = -1139549008533529002LL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3189918882478245671LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
