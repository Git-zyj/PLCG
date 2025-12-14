#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 389207995479323372LL;
unsigned short var_3 = (unsigned short)34196;
short var_4 = (short)23991;
_Bool var_5 = (_Bool)0;
long long int var_8 = -4853574045346718504LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)307;
int zero = 0;
unsigned long long int var_15 = 11875864402184178988ULL;
unsigned short var_16 = (unsigned short)25379;
int var_17 = -651994884;
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
