#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)36;
long long int var_1 = -3940057381446843325LL;
unsigned char var_2 = (unsigned char)82;
_Bool var_4 = (_Bool)1;
int var_6 = -2090918485;
unsigned int var_7 = 2815342402U;
_Bool var_8 = (_Bool)1;
int var_9 = 1729433826;
int zero = 0;
unsigned short var_10 = (unsigned short)51001;
int var_11 = 124381882;
unsigned int var_12 = 2544618628U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
