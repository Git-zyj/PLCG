#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6301409613327274748LL;
short var_1 = (short)-8051;
short var_2 = (short)9302;
unsigned char var_3 = (unsigned char)234;
unsigned char var_6 = (unsigned char)60;
int var_8 = -1157441118;
int zero = 0;
unsigned int var_10 = 3203195747U;
int var_11 = -1297066302;
int var_12 = -1715212243;
unsigned short var_13 = (unsigned short)931;
unsigned long long int var_14 = 16351936338668905439ULL;
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
