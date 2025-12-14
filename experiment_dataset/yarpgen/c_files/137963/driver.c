#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 852661279U;
signed char var_3 = (signed char)62;
unsigned short var_4 = (unsigned short)41657;
unsigned long long int var_7 = 12439772234179145103ULL;
int var_8 = -1745126234;
unsigned long long int var_10 = 6103389166466623083ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)28;
long long int var_16 = -3297904324696576140LL;
int zero = 0;
unsigned short var_17 = (unsigned short)1392;
short var_18 = (short)-31856;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)15061;
long long int var_21 = -515896518121937903LL;
unsigned short var_22 = (unsigned short)3597;
int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1716729395;
}

void checksum() {
    hash(&seed, var_17);
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
