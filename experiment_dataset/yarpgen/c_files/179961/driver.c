#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1912221265U;
_Bool var_7 = (_Bool)1;
int var_10 = 2039264065;
long long int var_11 = 7930061897220377982LL;
short var_15 = (short)16643;
int zero = 0;
short var_20 = (short)5728;
int var_21 = -1282842281;
long long int var_22 = 6979964117932746133LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
