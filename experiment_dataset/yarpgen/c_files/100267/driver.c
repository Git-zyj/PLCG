#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 115014716;
unsigned int var_1 = 2115281994U;
signed char var_2 = (signed char)-54;
unsigned char var_4 = (unsigned char)168;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)10;
short var_10 = (short)23959;
int zero = 0;
signed char var_11 = (signed char)72;
long long int var_12 = 5822885786708261476LL;
signed char var_13 = (signed char)-19;
int var_14 = 843647092;
long long int var_15 = 5261722535199898082LL;
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
