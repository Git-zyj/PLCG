#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10361189518318715517ULL;
long long int var_6 = -7172443746563502365LL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
long long int var_12 = -1287400323168329149LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)10180;
short var_19 = (short)5285;
void init() {
}

void checksum() {
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
