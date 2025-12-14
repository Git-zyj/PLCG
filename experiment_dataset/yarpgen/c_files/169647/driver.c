#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-19115;
short var_3 = (short)10151;
unsigned short var_4 = (unsigned short)13479;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 126136862U;
short var_8 = (short)-22983;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)25222;
int zero = 0;
signed char var_11 = (signed char)-119;
unsigned long long int var_12 = 1932888180603434871ULL;
unsigned int var_13 = 846504263U;
unsigned int var_14 = 278117685U;
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
