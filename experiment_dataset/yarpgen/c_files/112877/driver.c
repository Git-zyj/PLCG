#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-15;
unsigned char var_8 = (unsigned char)141;
signed char var_14 = (signed char)18;
int var_15 = -1138469338;
unsigned long long int var_19 = 4090354245686082750ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-21312;
short var_22 = (short)-24942;
unsigned int var_23 = 3212910809U;
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
