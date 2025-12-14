#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-80;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)1;
int var_7 = -30953037;
unsigned char var_10 = (unsigned char)174;
long long int var_14 = 7887804778485838839LL;
int var_16 = 1157619609;
unsigned int var_17 = 387890139U;
int zero = 0;
unsigned char var_18 = (unsigned char)44;
unsigned short var_19 = (unsigned short)26353;
unsigned short var_20 = (unsigned short)900;
unsigned char var_21 = (unsigned char)114;
signed char var_22 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
