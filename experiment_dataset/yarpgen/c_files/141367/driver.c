#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)33937;
unsigned int var_9 = 3675161878U;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
int var_17 = -1201783001;
unsigned long long int var_18 = 1479623639059342338ULL;
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
