#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-32;
unsigned int var_3 = 1043053926U;
unsigned char var_7 = (unsigned char)101;
int var_12 = -935878852;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1592487537U;
unsigned int var_16 = 3711659273U;
unsigned int var_18 = 3264193509U;
int zero = 0;
signed char var_19 = (signed char)34;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-32659;
long long int var_22 = 1186297674599434008LL;
short var_23 = (short)-2840;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
