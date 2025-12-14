#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5667913677115067755LL;
signed char var_1 = (signed char)101;
short var_2 = (short)-5009;
short var_6 = (short)-31725;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)63472;
unsigned char var_11 = (unsigned char)114;
unsigned char var_15 = (unsigned char)46;
int var_16 = 1481019034;
int var_17 = 1095927390;
long long int var_18 = -6553406514117697136LL;
int zero = 0;
long long int var_19 = 5410910677899869096LL;
unsigned long long int var_20 = 2090603394805130652ULL;
int var_21 = 1069614844;
int var_22 = -767955283;
long long int var_23 = -4441149709931728760LL;
long long int var_24 = 7250418246006419546LL;
signed char var_25 = (signed char)125;
long long int var_26 = 8905760299473731032LL;
unsigned int arr_4 [21] ;
unsigned char arr_8 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1890416385U : 1165046459U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)148;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
