#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_4 = -3366181279542443811LL;
short var_5 = (short)-24633;
short var_6 = (short)-12883;
long long int var_8 = -3108449282192196594LL;
long long int var_11 = 895438026332262734LL;
int var_12 = -1507683080;
int zero = 0;
unsigned short var_13 = (unsigned short)56250;
signed char var_14 = (signed char)49;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
