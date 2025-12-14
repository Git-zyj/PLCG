#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_5 = 289098047;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-20759;
unsigned short var_13 = (unsigned short)62165;
unsigned long long int var_15 = 139242854089403682ULL;
signed char var_17 = (signed char)101;
long long int var_18 = 9072021265901037943LL;
int zero = 0;
unsigned char var_19 = (unsigned char)113;
unsigned char var_20 = (unsigned char)169;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
