#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4554793328151741466LL;
unsigned long long int var_5 = 194806113317288186ULL;
short var_7 = (short)3590;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)63178;
int var_10 = -1982005294;
unsigned long long int var_11 = 12514503634622540741ULL;
unsigned long long int var_14 = 2589807301657906885ULL;
unsigned int var_17 = 944932714U;
short var_18 = (short)-15487;
int zero = 0;
short var_20 = (short)-14815;
unsigned long long int var_21 = 2693622186477637198ULL;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3168836083U;
unsigned char var_24 = (unsigned char)37;
short var_25 = (short)2792;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
unsigned short var_28 = (unsigned short)28197;
unsigned short var_29 = (unsigned short)31833;
short var_30 = (short)22213;
unsigned char var_31 = (unsigned char)55;
_Bool var_32 = (_Bool)1;
short var_33 = (short)5479;
long long int var_34 = -5630986123437962462LL;
unsigned int var_35 = 1980609557U;
unsigned short var_36 = (unsigned short)34692;
int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
short arr_2 [13] [13] ;
_Bool arr_3 [13] [13] [13] ;
int arr_4 [13] ;
unsigned char arr_5 [13] [13] [13] [13] ;
unsigned char arr_6 [13] [13] [13] [13] ;
unsigned short arr_8 [13] ;
int arr_9 [13] [13] ;
unsigned int arr_11 [13] [13] [13] [13] [13] ;
short arr_12 [13] [13] [13] [13] [13] [13] [13] ;
signed char arr_15 [13] [13] ;
unsigned long long int arr_16 [13] ;
_Bool arr_17 [13] [13] [13] [13] ;
_Bool arr_18 [13] [13] [13] [13] ;
short arr_19 [13] [13] [13] ;
long long int arr_20 [13] ;
_Bool arr_24 [13] ;
int arr_13 [13] [13] [13] [13] ;
int arr_25 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1344968527;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 6061366504017023085ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (short)3005;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -1155240321;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned short)58599;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = 2074400420;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 4111403039U : 2529151746U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)31067;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = 17254847381264161226ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)-10866;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = -3291372737907339969LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1190854281 : 384854838;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = -592704912;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
