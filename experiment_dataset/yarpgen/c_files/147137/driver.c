#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
unsigned long long int var_1 = 3071927047693655134ULL;
signed char var_4 = (signed char)-64;
unsigned long long int var_5 = 2814631004796088316ULL;
short var_6 = (short)20592;
short var_7 = (short)-8771;
short var_9 = (short)623;
unsigned char var_10 = (unsigned char)127;
int zero = 0;
unsigned short var_11 = (unsigned short)29311;
int var_12 = 780086019;
long long int var_13 = 7171554329474491029LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
