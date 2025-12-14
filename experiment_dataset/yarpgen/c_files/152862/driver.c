#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1423592669U;
int var_7 = 1109853715;
long long int var_14 = -1526265678089898429LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-3809;
int zero = 0;
short var_20 = (short)26002;
signed char var_21 = (signed char)-126;
long long int var_22 = -8260260604909659421LL;
unsigned long long int var_23 = 17034866260946870992ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
