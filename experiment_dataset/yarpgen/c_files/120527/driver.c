#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23722;
int var_2 = 1670471368;
signed char var_3 = (signed char)92;
unsigned int var_4 = 68565751U;
signed char var_6 = (signed char)75;
unsigned long long int var_7 = 2904436237714528420ULL;
unsigned int var_9 = 3442531301U;
int zero = 0;
short var_11 = (short)22771;
unsigned long long int var_12 = 15537182970263327036ULL;
unsigned long long int var_13 = 1184284194312600196ULL;
int var_14 = -1899788872;
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
