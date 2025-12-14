#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
signed char var_2 = (signed char)92;
int var_3 = -1007727189;
short var_4 = (short)18070;
unsigned int var_6 = 851390137U;
signed char var_7 = (signed char)-12;
unsigned long long int var_10 = 11081335408378688692ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)16060;
signed char var_13 = (signed char)125;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)111;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
