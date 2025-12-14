#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-8974;
unsigned int var_2 = 842689469U;
unsigned int var_6 = 2244012339U;
short var_7 = (short)-14892;
long long int var_8 = 4226681962256226979LL;
int zero = 0;
short var_10 = (short)-21414;
unsigned long long int var_11 = 10761895422905257819ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1069254451U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
