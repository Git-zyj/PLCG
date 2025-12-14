#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2765;
unsigned long long int var_1 = 2969096241722140765ULL;
unsigned long long int var_4 = 6664045760516633363ULL;
unsigned char var_6 = (unsigned char)220;
unsigned short var_9 = (unsigned short)21967;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_15 = 4054543947891827455LL;
short var_16 = (short)19910;
long long int var_17 = -4864062903175722871LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
