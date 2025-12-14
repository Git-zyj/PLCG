#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)58;
unsigned long long int var_7 = 4023907198120968792ULL;
unsigned int var_8 = 2414214600U;
unsigned char var_9 = (unsigned char)237;
unsigned char var_10 = (unsigned char)205;
long long int var_14 = -3333700483062512479LL;
unsigned long long int var_15 = 6470341043637213187ULL;
unsigned long long int var_16 = 18147672472268823973ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)49256;
_Bool var_18 = (_Bool)1;
int var_19 = -964442252;
void init() {
}

void checksum() {
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
