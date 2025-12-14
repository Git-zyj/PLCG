#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5745139607954787666LL;
unsigned short var_3 = (unsigned short)28946;
int var_4 = -1443176266;
unsigned int var_6 = 2324994904U;
unsigned char var_10 = (unsigned char)235;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)22619;
int var_14 = -1847148009;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
