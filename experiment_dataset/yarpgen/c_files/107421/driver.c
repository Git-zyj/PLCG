#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2240307121338435537ULL;
int var_3 = -1682608706;
unsigned int var_5 = 4071835826U;
unsigned short var_7 = (unsigned short)1408;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 5164612480084787931ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)14091;
int var_15 = -2042195509;
unsigned int var_16 = 4064346731U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
