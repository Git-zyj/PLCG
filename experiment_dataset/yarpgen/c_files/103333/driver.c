#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -131468324;
unsigned long long int var_5 = 17146454513974211997ULL;
int var_7 = -1375220039;
short var_9 = (short)695;
int zero = 0;
int var_10 = -1409397432;
unsigned short var_11 = (unsigned short)54674;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
