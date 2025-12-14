#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)64982;
long long int var_5 = -5859723221018945963LL;
signed char var_12 = (signed char)-63;
unsigned char var_13 = (unsigned char)195;
long long int var_16 = 6097967435364952321LL;
long long int var_18 = -7125589254807510864LL;
unsigned short var_19 = (unsigned short)3124;
int zero = 0;
unsigned int var_20 = 1644345370U;
unsigned long long int var_21 = 1659588693981408209ULL;
unsigned short var_22 = (unsigned short)14859;
unsigned int var_23 = 3251699072U;
unsigned char var_24 = (unsigned char)116;
unsigned short arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)28007;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
