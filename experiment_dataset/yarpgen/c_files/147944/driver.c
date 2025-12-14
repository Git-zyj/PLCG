#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4778460440249900342LL;
signed char var_2 = (signed char)12;
int var_3 = -1496254613;
unsigned short var_7 = (unsigned short)4916;
int var_8 = 629674745;
short var_10 = (short)-3115;
unsigned char var_11 = (unsigned char)182;
unsigned char var_13 = (unsigned char)233;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)52258;
unsigned int var_19 = 3482014319U;
int zero = 0;
signed char var_20 = (signed char)-42;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17914498471481567098ULL;
short var_23 = (short)-11712;
void init() {
}

void checksum() {
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
