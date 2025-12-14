#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 95976513;
short var_3 = (short)27835;
unsigned short var_4 = (unsigned short)62460;
unsigned long long int var_6 = 7132787049708402140ULL;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)124;
unsigned long long int var_13 = 11096853753742722805ULL;
int var_17 = -1308612112;
int zero = 0;
unsigned char var_19 = (unsigned char)226;
int var_20 = -2048163746;
unsigned int var_21 = 2887045222U;
_Bool var_22 = (_Bool)1;
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
