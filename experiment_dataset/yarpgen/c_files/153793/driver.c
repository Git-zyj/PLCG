#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18419326456247845462ULL;
unsigned int var_6 = 4098621208U;
short var_7 = (short)31081;
unsigned long long int var_9 = 18024200893875209413ULL;
unsigned short var_10 = (unsigned short)24279;
_Bool var_12 = (_Bool)0;
int zero = 0;
long long int var_16 = -3670776297155282285LL;
int var_17 = -1634526191;
unsigned long long int var_18 = 15642343888222842779ULL;
int var_19 = 1512697972;
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
