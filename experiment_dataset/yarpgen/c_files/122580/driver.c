#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6108158112269289882LL;
signed char var_2 = (signed char)-122;
unsigned short var_7 = (unsigned short)25167;
short var_9 = (short)-12059;
long long int var_12 = -2062883827969573461LL;
_Bool var_13 = (_Bool)0;
unsigned char var_16 = (unsigned char)36;
int zero = 0;
short var_17 = (short)-13644;
long long int var_18 = 3907817733557637631LL;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)159;
unsigned char var_21 = (unsigned char)72;
unsigned char arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)202;
}

void checksum() {
    hash(&seed, var_17);
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
