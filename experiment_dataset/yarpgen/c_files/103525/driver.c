#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)43;
unsigned int var_4 = 184117501U;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-116;
signed char var_9 = (signed char)100;
int var_11 = 500092243;
int zero = 0;
unsigned long long int var_12 = 5976180363087664504ULL;
long long int var_13 = -3338959641831111323LL;
int var_14 = -2072559262;
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
