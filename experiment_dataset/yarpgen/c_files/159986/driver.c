#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1772285040;
short var_1 = (short)21551;
long long int var_4 = 3219033664553462304LL;
_Bool var_5 = (_Bool)1;
long long int var_9 = 7958151514862658557LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -5977258659843847937LL;
unsigned char var_14 = (unsigned char)168;
long long int var_15 = -78474760098786544LL;
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
