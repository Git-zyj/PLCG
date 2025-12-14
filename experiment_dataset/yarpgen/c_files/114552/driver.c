#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14128;
unsigned int var_2 = 226293633U;
_Bool var_3 = (_Bool)0;
short var_5 = (short)31464;
signed char var_7 = (signed char)13;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-61;
_Bool var_12 = (_Bool)1;
long long int var_13 = 3972553386950953891LL;
_Bool var_14 = (_Bool)0;
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
