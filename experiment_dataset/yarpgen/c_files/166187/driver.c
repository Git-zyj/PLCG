#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -15444320;
unsigned short var_2 = (unsigned short)37332;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2659817439U;
unsigned char var_14 = (unsigned char)245;
int zero = 0;
unsigned short var_18 = (unsigned short)11608;
int var_19 = 1978674843;
unsigned char var_20 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
