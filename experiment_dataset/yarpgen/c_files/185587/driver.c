#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45189;
short var_1 = (short)30807;
short var_2 = (short)-11988;
unsigned int var_3 = 2648535595U;
unsigned short var_4 = (unsigned short)34963;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)44073;
unsigned long long int var_8 = 7525221769913371758ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)57288;
unsigned short var_12 = (unsigned short)41408;
short var_13 = (short)-27981;
long long int var_14 = -1598849696217969558LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
