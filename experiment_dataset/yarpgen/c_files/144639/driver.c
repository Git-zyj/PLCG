#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)175;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)230;
_Bool var_6 = (_Bool)0;
long long int var_9 = 2238145778161273268LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -9032652451950538894LL;
int zero = 0;
unsigned int var_17 = 4100035650U;
unsigned char var_18 = (unsigned char)174;
void init() {
}

void checksum() {
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
