#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7495667458728929068LL;
_Bool var_3 = (_Bool)1;
int var_5 = -864581554;
long long int var_6 = 4960599349426644543LL;
unsigned short var_11 = (unsigned short)41952;
int var_13 = -342988701;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1688172952;
int var_16 = -247680303;
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
