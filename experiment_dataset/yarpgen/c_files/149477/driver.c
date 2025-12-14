#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1038267771;
int var_4 = -291030805;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)65;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)166;
unsigned long long int var_13 = 10440398920189461740ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
