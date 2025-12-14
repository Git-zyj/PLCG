#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11096094627184755874ULL;
int var_1 = 9197476;
int var_2 = -280073989;
unsigned long long int var_7 = 10836075481019888845ULL;
unsigned char var_9 = (unsigned char)23;
unsigned char var_11 = (unsigned char)67;
unsigned short var_12 = (unsigned short)23242;
int var_13 = 2004623972;
unsigned long long int var_14 = 14282284115544040947ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 535000850;
int var_17 = -728633805;
unsigned long long int var_18 = 3324944678747839331ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = -7145981687001978415LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
