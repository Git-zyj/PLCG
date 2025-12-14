#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2459938236396515462ULL;
unsigned short var_1 = (unsigned short)8502;
unsigned int var_2 = 4111714770U;
signed char var_5 = (signed char)30;
int var_7 = -2123890363;
short var_8 = (short)-18855;
signed char var_9 = (signed char)104;
signed char var_11 = (signed char)10;
unsigned int var_13 = 3219124441U;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)52;
unsigned char var_22 = (unsigned char)63;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
