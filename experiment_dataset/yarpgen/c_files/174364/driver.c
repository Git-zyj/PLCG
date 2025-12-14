#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3308417566U;
long long int var_3 = 4392177896335218401LL;
unsigned short var_4 = (unsigned short)63183;
long long int var_11 = -5309799492231597632LL;
int zero = 0;
int var_13 = 864676622;
unsigned short var_14 = (unsigned short)23922;
int var_15 = 1055456556;
unsigned short var_16 = (unsigned short)46031;
long long int var_17 = 8748401875773833662LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
