#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8571144780910645933LL;
short var_2 = (short)-2578;
short var_4 = (short)11295;
short var_5 = (short)-32683;
unsigned char var_8 = (unsigned char)227;
unsigned int var_9 = 3952778800U;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)70;
long long int var_12 = -7755111407452916748LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
