#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1762816184;
unsigned short var_4 = (unsigned short)43755;
unsigned int var_5 = 58834567U;
long long int var_6 = -1065241582419923155LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 14397527293556864929ULL;
short var_11 = (short)-4156;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
