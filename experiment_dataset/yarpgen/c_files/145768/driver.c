#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9899952239971441411ULL;
_Bool var_3 = (_Bool)0;
unsigned char var_7 = (unsigned char)136;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)58351;
int var_14 = 2077548045;
unsigned long long int var_15 = 13113908414949323407ULL;
signed char var_18 = (signed char)-8;
int zero = 0;
short var_20 = (short)-26313;
unsigned short var_21 = (unsigned short)41923;
unsigned long long int var_22 = 16167357037912086865ULL;
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
