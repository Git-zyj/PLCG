#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11981;
short var_2 = (short)14042;
int var_3 = -1076504914;
unsigned int var_6 = 3526626769U;
short var_7 = (short)17467;
short var_8 = (short)21785;
unsigned int var_11 = 73483123U;
short var_13 = (short)5722;
signed char var_14 = (signed char)-54;
signed char var_18 = (signed char)-27;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 7297029959078110364LL;
unsigned char var_22 = (unsigned char)77;
unsigned int var_23 = 3037448108U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
