#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3850725543U;
_Bool var_4 = (_Bool)1;
short var_5 = (short)22632;
long long int var_6 = 1478536777532505064LL;
unsigned short var_8 = (unsigned short)23594;
int zero = 0;
unsigned char var_14 = (unsigned char)248;
unsigned int var_15 = 554358113U;
int var_16 = -1749861025;
void init() {
}

void checksum() {
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
