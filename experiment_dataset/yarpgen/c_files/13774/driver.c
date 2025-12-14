#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3228185925903535957ULL;
unsigned long long int var_3 = 15717499186884170123ULL;
unsigned short var_4 = (unsigned short)21419;
int var_5 = 1399744315;
int var_6 = 948720358;
unsigned long long int var_10 = 18432764531951714461ULL;
int zero = 0;
signed char var_11 = (signed char)13;
unsigned long long int var_12 = 16571935143372627627ULL;
unsigned long long int var_13 = 1934107388092832711ULL;
void init() {
}

void checksum() {
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
