#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)7067;
long long int var_3 = -8956845417741741644LL;
long long int var_4 = -1713416339553143842LL;
unsigned char var_5 = (unsigned char)199;
long long int var_6 = -5780347366361440226LL;
signed char var_8 = (signed char)7;
signed char var_9 = (signed char)62;
int zero = 0;
unsigned int var_10 = 1939893157U;
unsigned short var_11 = (unsigned short)46773;
unsigned int var_12 = 2844890032U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
