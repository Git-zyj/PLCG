#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2322939446269003102ULL;
signed char var_4 = (signed char)-39;
signed char var_5 = (signed char)34;
unsigned char var_8 = (unsigned char)172;
unsigned short var_10 = (unsigned short)8455;
short var_11 = (short)10245;
int var_13 = 1200770092;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned short var_19 = (unsigned short)56944;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)30675;
short var_22 = (short)14801;
void init() {
}

void checksum() {
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
