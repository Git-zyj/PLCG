#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12033;
long long int var_3 = -6718490377426717474LL;
int var_4 = 1723560398;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)49737;
unsigned short var_9 = (unsigned short)52070;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)37383;
unsigned short var_13 = (unsigned short)46085;
unsigned long long int var_14 = 15176884951187038349ULL;
unsigned short var_15 = (unsigned short)39762;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
