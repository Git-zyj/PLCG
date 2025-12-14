#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
unsigned int var_3 = 3540981303U;
int var_5 = 1893371998;
unsigned char var_6 = (unsigned char)217;
int var_7 = -100456694;
int var_8 = -1985129735;
_Bool var_9 = (_Bool)0;
short var_10 = (short)8150;
unsigned int var_13 = 940869922U;
unsigned int var_14 = 1327787872U;
int zero = 0;
unsigned char var_15 = (unsigned char)254;
unsigned int var_16 = 2462038160U;
long long int var_17 = -1070927969229829562LL;
unsigned int var_18 = 4045412240U;
short var_19 = (short)-6420;
unsigned long long int var_20 = 11034523540436586162ULL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 2988119117U;
unsigned int arr_1 [16] [16] ;
long long int arr_3 [16] ;
unsigned long long int arr_7 [16] [16] [16] [16] [16] ;
int arr_10 [16] [16] ;
int arr_11 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 3393053511U : 811351605U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7072695457654025386LL : 4445325971332894380LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = 12901080563522774969ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1459797744 : 1818446688;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 943930536 : -561092076;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
