#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7335017608508937956ULL;
int var_1 = -1412892443;
unsigned short var_5 = (unsigned short)24590;
unsigned long long int var_6 = 16726246130453963423ULL;
unsigned short var_10 = (unsigned short)20336;
_Bool var_12 = (_Bool)1;
short var_15 = (short)-31202;
long long int var_16 = 4329807218235264149LL;
signed char var_17 = (signed char)-13;
int zero = 0;
unsigned int var_19 = 3389759635U;
int var_20 = 1752950521;
unsigned int var_21 = 4031167927U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
