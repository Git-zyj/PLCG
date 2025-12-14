#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14357;
int var_1 = -1882716874;
int var_2 = 221554876;
short var_3 = (short)7228;
_Bool var_4 = (_Bool)0;
int var_7 = 960178083;
short var_9 = (short)-7801;
signed char var_10 = (signed char)-1;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)125;
short var_14 = (short)-28083;
signed char var_15 = (signed char)-2;
void init() {
}

void checksum() {
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
