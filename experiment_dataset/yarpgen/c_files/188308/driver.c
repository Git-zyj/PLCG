#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
int var_6 = -1724282491;
unsigned int var_9 = 1700759898U;
long long int var_11 = -3783662670807078028LL;
long long int var_13 = 2796582446659732476LL;
unsigned short var_14 = (unsigned short)57263;
int zero = 0;
unsigned char var_15 = (unsigned char)136;
unsigned short var_16 = (unsigned short)49996;
unsigned short var_17 = (unsigned short)60941;
long long int var_18 = 4946798536490084861LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
