#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)716;
unsigned char var_4 = (unsigned char)172;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-101;
signed char var_8 = (signed char)119;
unsigned short var_11 = (unsigned short)9888;
unsigned long long int var_12 = 4248878256615069756ULL;
int zero = 0;
short var_14 = (short)18521;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)53262;
unsigned int var_17 = 4224544072U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
