#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 908246445;
long long int var_2 = -7679244569099293021LL;
short var_5 = (short)32742;
int var_6 = -1892827586;
unsigned short var_7 = (unsigned short)10297;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 3078558608U;
unsigned int var_14 = 353942638U;
int var_16 = 1088176885;
signed char var_17 = (signed char)-5;
int zero = 0;
unsigned short var_18 = (unsigned short)20613;
unsigned char var_19 = (unsigned char)54;
int var_20 = 1606766453;
long long int var_21 = 6926756090590684561LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
