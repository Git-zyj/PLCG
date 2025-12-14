#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26817;
signed char var_1 = (signed char)-79;
long long int var_3 = -2703969844128862844LL;
signed char var_4 = (signed char)54;
unsigned long long int var_6 = 366437274669740219ULL;
unsigned int var_7 = 96586040U;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)16328;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)51661;
void init() {
}

void checksum() {
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
