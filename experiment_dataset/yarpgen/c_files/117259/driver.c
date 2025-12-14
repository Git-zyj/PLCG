#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-11334;
unsigned long long int var_4 = 15209867961343920079ULL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_8 = 16935278541638238595ULL;
long long int var_11 = 5070235265684358817LL;
unsigned short var_14 = (unsigned short)58409;
int zero = 0;
int var_18 = 177728743;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -8751970085654942382LL;
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
