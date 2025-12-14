#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23774;
short var_3 = (short)-5755;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 6514687791770157745ULL;
int var_8 = 1051261314;
signed char var_9 = (signed char)93;
signed char var_10 = (signed char)124;
unsigned long long int var_11 = 8708766797253250064ULL;
unsigned short var_13 = (unsigned short)40990;
int zero = 0;
unsigned short var_15 = (unsigned short)16800;
unsigned char var_16 = (unsigned char)53;
unsigned char var_17 = (unsigned char)95;
unsigned short var_18 = (unsigned short)30481;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
