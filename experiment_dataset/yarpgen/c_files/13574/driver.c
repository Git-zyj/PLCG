#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
long long int var_1 = 4203863160024121910LL;
long long int var_2 = 2445087146408875318LL;
long long int var_8 = -1152132966270633986LL;
unsigned short var_11 = (unsigned short)37511;
unsigned int var_12 = 968978241U;
_Bool var_17 = (_Bool)0;
unsigned long long int var_19 = 10294489536869620563ULL;
int zero = 0;
unsigned int var_20 = 126361966U;
unsigned int var_21 = 2517947313U;
signed char var_22 = (signed char)-8;
int var_23 = 956139065;
int var_24 = -2105983127;
unsigned short var_25 = (unsigned short)45335;
unsigned short var_26 = (unsigned short)21012;
unsigned char var_27 = (unsigned char)119;
int var_28 = 306563480;
unsigned int var_29 = 271092176U;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)-53;
long long int arr_0 [10] [10] ;
signed char arr_1 [10] ;
_Bool arr_3 [10] [10] ;
int arr_4 [10] ;
unsigned short arr_5 [10] [10] ;
long long int arr_6 [10] [10] ;
long long int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 2209729735835168578LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-24;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -611438847;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)19639;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 4477188073849120771LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -967232696886569098LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
