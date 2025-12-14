#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36464;
unsigned long long int var_3 = 9465056120289905371ULL;
unsigned long long int var_5 = 5706788967427604619ULL;
unsigned short var_16 = (unsigned short)52670;
short var_17 = (short)6552;
int zero = 0;
unsigned short var_18 = (unsigned short)25780;
_Bool var_19 = (_Bool)0;
int var_20 = -402973302;
void init() {
}

void checksum() {
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
