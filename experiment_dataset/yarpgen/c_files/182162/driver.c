#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9722539769062202303ULL;
short var_2 = (short)-29376;
unsigned int var_3 = 1180476376U;
signed char var_5 = (signed char)12;
unsigned long long int var_9 = 17991989473880281990ULL;
long long int var_13 = -6478509302902737409LL;
unsigned int var_14 = 2236679827U;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -468337679;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
