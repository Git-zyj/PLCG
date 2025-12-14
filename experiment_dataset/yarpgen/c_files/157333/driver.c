#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1192555285;
unsigned long long int var_2 = 14412561213798438244ULL;
unsigned char var_6 = (unsigned char)203;
_Bool var_7 = (_Bool)1;
long long int var_9 = -2119244377935454122LL;
unsigned char var_10 = (unsigned char)66;
unsigned char var_14 = (unsigned char)68;
int zero = 0;
long long int var_15 = -1202878460775098534LL;
unsigned short var_16 = (unsigned short)10059;
int var_17 = 1314190563;
void init() {
}

void checksum() {
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
