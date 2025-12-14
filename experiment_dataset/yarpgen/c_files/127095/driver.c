#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5066114189706198667LL;
unsigned int var_3 = 345385905U;
int var_4 = -2003704288;
int var_6 = -1621436976;
signed char var_7 = (signed char)-23;
unsigned short var_8 = (unsigned short)11350;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)6389;
long long int var_14 = 9045116042318436870LL;
int zero = 0;
unsigned short var_19 = (unsigned short)49622;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
