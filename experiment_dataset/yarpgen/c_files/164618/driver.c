#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47570;
unsigned char var_1 = (unsigned char)254;
signed char var_2 = (signed char)-64;
unsigned long long int var_3 = 8415591645744059430ULL;
signed char var_4 = (signed char)113;
unsigned short var_5 = (unsigned short)53197;
unsigned short var_7 = (unsigned short)20009;
unsigned long long int var_9 = 7515631397465045367ULL;
signed char var_11 = (signed char)39;
unsigned long long int var_12 = 10490498355497653451ULL;
unsigned short var_16 = (unsigned short)29940;
unsigned short var_18 = (unsigned short)1641;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-72;
unsigned long long int var_21 = 6654781775639042412ULL;
signed char var_22 = (signed char)-35;
unsigned short var_23 = (unsigned short)15036;
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
