#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24209;
unsigned short var_1 = (unsigned short)49849;
unsigned long long int var_3 = 15442922606812705128ULL;
short var_5 = (short)16223;
long long int var_8 = -616532877000503964LL;
short var_10 = (short)12222;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1244082254642018223LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
