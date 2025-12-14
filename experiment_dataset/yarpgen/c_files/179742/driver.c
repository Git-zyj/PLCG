#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9266358268844167159ULL;
unsigned char var_3 = (unsigned char)48;
unsigned int var_4 = 4177666495U;
unsigned char var_5 = (unsigned char)13;
unsigned long long int var_7 = 16611405431417547447ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)19;
int var_13 = 1349915524;
int zero = 0;
short var_14 = (short)-10743;
long long int var_15 = 5174581806830370876LL;
unsigned long long int var_16 = 14364631686515477936ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
