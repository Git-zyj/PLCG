#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
long long int var_1 = -7803039423734187780LL;
unsigned long long int var_4 = 1705493116831530374ULL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)7543;
unsigned long long int var_10 = 15262994430906656128ULL;
int zero = 0;
unsigned int var_11 = 2158971733U;
unsigned int var_12 = 1895181911U;
unsigned int var_13 = 1685419539U;
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
