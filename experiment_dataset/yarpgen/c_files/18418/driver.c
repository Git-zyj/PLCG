#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)145;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-30585;
_Bool var_4 = (_Bool)0;
long long int var_6 = -6731322867031130035LL;
short var_13 = (short)-16004;
int zero = 0;
unsigned char var_15 = (unsigned char)165;
unsigned char var_16 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
