#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2265787973051831529LL;
short var_1 = (short)-30809;
unsigned short var_2 = (unsigned short)31130;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)38604;
short var_5 = (short)-7577;
unsigned short var_6 = (unsigned short)2188;
unsigned short var_8 = (unsigned short)43585;
unsigned char var_9 = (unsigned char)76;
unsigned int var_10 = 1786011669U;
int zero = 0;
short var_11 = (short)-7058;
unsigned int var_12 = 4164996339U;
int var_13 = -2085337648;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
