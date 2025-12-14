#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7845163581054777550LL;
_Bool var_2 = (_Bool)0;
unsigned short var_7 = (unsigned short)48599;
signed char var_8 = (signed char)-107;
unsigned char var_9 = (unsigned char)192;
short var_11 = (short)-28275;
int zero = 0;
unsigned char var_16 = (unsigned char)143;
unsigned short var_17 = (unsigned short)18059;
unsigned char var_18 = (unsigned char)214;
void init() {
}

void checksum() {
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
