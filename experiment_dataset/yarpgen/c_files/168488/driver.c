#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20461;
unsigned char var_1 = (unsigned char)251;
unsigned short var_2 = (unsigned short)38031;
int var_5 = 1594730908;
unsigned long long int var_8 = 14420147308577239423ULL;
long long int var_9 = -6449218885074422534LL;
_Bool var_11 = (_Bool)1;
unsigned short var_15 = (unsigned short)51342;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1775445859;
unsigned short var_18 = (unsigned short)62633;
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
