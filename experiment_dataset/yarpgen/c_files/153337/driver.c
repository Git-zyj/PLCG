#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)94;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3845413032U;
unsigned int var_7 = 4167426900U;
_Bool var_9 = (_Bool)1;
unsigned int var_13 = 3428464706U;
int zero = 0;
int var_14 = -339098168;
unsigned char var_15 = (unsigned char)17;
unsigned long long int var_16 = 7170546622689222447ULL;
unsigned char var_17 = (unsigned char)47;
int var_18 = -786111107;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
