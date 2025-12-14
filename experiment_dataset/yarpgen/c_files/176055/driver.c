#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1348308665U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-3;
int zero = 0;
short var_11 = (short)-19634;
long long int var_12 = -7755123413327681624LL;
unsigned long long int var_13 = 290116285017096672ULL;
short var_14 = (short)16299;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
