#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)29119;
short var_4 = (short)7799;
unsigned long long int var_6 = 13342223492291711050ULL;
unsigned long long int var_7 = 8332629416326432321ULL;
unsigned char var_8 = (unsigned char)36;
long long int var_11 = 3963226418748924210LL;
int var_13 = -1130915195;
int zero = 0;
unsigned long long int var_14 = 5287482970725952553ULL;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)30803;
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
