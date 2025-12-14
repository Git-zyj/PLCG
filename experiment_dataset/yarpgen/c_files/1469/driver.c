#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)53;
int var_2 = -351764346;
long long int var_3 = 5345106949796255625LL;
unsigned char var_5 = (unsigned char)164;
unsigned short var_6 = (unsigned short)29590;
int var_7 = -809277195;
unsigned char var_8 = (unsigned char)118;
_Bool var_9 = (_Bool)1;
short var_10 = (short)15709;
long long int var_11 = 4069957974724772101LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -1916698909;
unsigned long long int var_15 = 7165317480333622353ULL;
unsigned char var_16 = (unsigned char)169;
unsigned char var_17 = (unsigned char)11;
long long int var_18 = 7399415423387918662LL;
unsigned long long int var_19 = 17264172532903776134ULL;
unsigned char var_20 = (unsigned char)87;
unsigned char var_21 = (unsigned char)171;
long long int var_22 = -6413728925168471635LL;
unsigned long long int var_23 = 1918550329752519204ULL;
long long int arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 2903977530632686629LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
