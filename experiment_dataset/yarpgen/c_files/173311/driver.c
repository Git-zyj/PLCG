#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11630;
int var_3 = -1844415743;
int var_6 = -808361847;
unsigned int var_9 = 400830957U;
signed char var_10 = (signed char)-117;
short var_12 = (short)-13128;
unsigned short var_14 = (unsigned short)44168;
int var_15 = -1134215500;
int zero = 0;
signed char var_19 = (signed char)90;
short var_20 = (short)-22540;
long long int var_21 = 5261627594641946107LL;
short var_22 = (short)-2220;
_Bool var_23 = (_Bool)1;
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
