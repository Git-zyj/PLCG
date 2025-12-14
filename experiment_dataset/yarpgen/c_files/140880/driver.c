#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53672;
int var_2 = 2028659219;
signed char var_5 = (signed char)13;
int var_6 = 268564201;
unsigned long long int var_7 = 16081688346574097069ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 807706602U;
int zero = 0;
int var_14 = -629425620;
unsigned short var_15 = (unsigned short)25241;
void init() {
}

void checksum() {
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
