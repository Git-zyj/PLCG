#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15465610926235664558ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)109;
int var_7 = 1677502554;
unsigned char var_9 = (unsigned char)161;
unsigned char var_10 = (unsigned char)198;
unsigned int var_14 = 1748990031U;
unsigned short var_15 = (unsigned short)46441;
int zero = 0;
unsigned char var_17 = (unsigned char)98;
unsigned short var_18 = (unsigned short)53001;
unsigned long long int var_19 = 4883618552200376863ULL;
void init() {
}

void checksum() {
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
