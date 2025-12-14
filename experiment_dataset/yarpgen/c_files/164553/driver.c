#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24087;
_Bool var_2 = (_Bool)1;
unsigned short var_5 = (unsigned short)61287;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 6414317654854729465ULL;
unsigned short var_8 = (unsigned short)56516;
unsigned short var_10 = (unsigned short)57939;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 16088924319688916075ULL;
int var_13 = 47126234;
int var_14 = 1010619149;
_Bool var_15 = (_Bool)1;
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
