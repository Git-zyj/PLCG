#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28364;
short var_1 = (short)-15590;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 3635541566U;
long long int var_4 = -5334504570870598526LL;
short var_5 = (short)23947;
short var_6 = (short)-27207;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)81;
long long int var_10 = 2272507273900758054LL;
unsigned char var_11 = (unsigned char)60;
int zero = 0;
unsigned short var_12 = (unsigned short)6589;
unsigned char var_13 = (unsigned char)90;
unsigned char var_14 = (unsigned char)163;
unsigned short var_15 = (unsigned short)4396;
void init() {
}

void checksum() {
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
