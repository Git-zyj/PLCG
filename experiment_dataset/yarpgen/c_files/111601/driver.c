#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29123;
unsigned int var_4 = 3724201160U;
_Bool var_5 = (_Bool)0;
long long int var_6 = -5132690243080180930LL;
unsigned long long int var_7 = 15328771457652975974ULL;
unsigned long long int var_9 = 13626290334039105727ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1697095622U;
int var_21 = -904838017;
long long int var_22 = -1474603120564418177LL;
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
