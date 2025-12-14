#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1983739353;
_Bool var_7 = (_Bool)0;
int var_9 = -1747419285;
_Bool var_11 = (_Bool)1;
unsigned short var_15 = (unsigned short)64747;
int zero = 0;
unsigned short var_18 = (unsigned short)16565;
int var_19 = -970575437;
int var_20 = -1540669860;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
