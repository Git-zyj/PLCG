#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8056806146287876592ULL;
unsigned long long int var_2 = 11024790630091756011ULL;
unsigned long long int var_3 = 15123015343116403248ULL;
long long int var_6 = 6876681429180163490LL;
unsigned short var_8 = (unsigned short)46506;
unsigned char var_10 = (unsigned char)186;
unsigned long long int var_12 = 3357452912737615024ULL;
unsigned int var_15 = 2412990999U;
int zero = 0;
unsigned char var_17 = (unsigned char)250;
unsigned char var_18 = (unsigned char)152;
unsigned char var_19 = (unsigned char)161;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2830641143U;
_Bool var_22 = (_Bool)1;
long long int var_23 = -1582744405088524248LL;
signed char var_24 = (signed char)-11;
_Bool var_25 = (_Bool)0;
int var_26 = -793601486;
unsigned char var_27 = (unsigned char)99;
long long int var_28 = -6085674620315989865LL;
signed char var_29 = (signed char)76;
unsigned int var_30 = 1527457414U;
unsigned int var_31 = 682644993U;
unsigned char var_32 = (unsigned char)164;
int arr_8 [14] [14] [14] [14] ;
unsigned char arr_10 [14] [14] [14] [14] [14] ;
unsigned short arr_12 [14] [14] [14] [14] ;
unsigned int arr_18 [20] ;
unsigned int arr_21 [20] ;
unsigned long long int arr_26 [20] [20] [20] [20] ;
long long int arr_15 [14] ;
unsigned char arr_22 [20] ;
signed char arr_23 [20] ;
unsigned short arr_28 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -959004670;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31275;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = 1236858680U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1368605060U : 2302825302U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 15576462796474684034ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 6323387959310483613LL : -169676595029887781LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned char)223 : (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (signed char)60 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)43898 : (unsigned short)6266;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
