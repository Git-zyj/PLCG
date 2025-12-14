#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 18264333302111754404ULL;
unsigned char var_8 = (unsigned char)150;
unsigned char var_11 = (unsigned char)105;
int zero = 0;
unsigned int var_16 = 2116753949U;
long long int var_17 = 4401328047431183653LL;
unsigned short var_18 = (unsigned short)31101;
unsigned long long int var_19 = 3104833263734176269ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
