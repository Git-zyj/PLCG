#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
short var_1 = (short)-7443;
long long int var_2 = -5966979741667120754LL;
unsigned int var_3 = 2994471551U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 3603627778U;
int var_8 = -1304233939;
unsigned short var_10 = (unsigned short)55836;
unsigned long long int var_11 = 18362556598846250993ULL;
unsigned char var_12 = (unsigned char)201;
unsigned long long int var_13 = 15680170079406230636ULL;
unsigned short var_15 = (unsigned short)31062;
signed char var_16 = (signed char)-110;
signed char var_17 = (signed char)32;
int zero = 0;
int var_19 = 1260606572;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
int var_22 = -1194131532;
unsigned long long int var_23 = 11323281319057721509ULL;
unsigned char var_24 = (unsigned char)79;
int var_25 = 829844464;
int var_26 = 2076996294;
_Bool var_27 = (_Bool)1;
unsigned int var_28 = 77833662U;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 12559455924611189293ULL;
unsigned char var_31 = (unsigned char)130;
int var_32 = 1077083490;
_Bool var_33 = (_Bool)1;
short var_34 = (short)-13662;
unsigned char var_35 = (unsigned char)107;
int var_36 = 942275167;
int var_37 = 1230436069;
long long int var_38 = -5171315031181646774LL;
unsigned long long int var_39 = 18321004210401364785ULL;
int var_40 = 1017265096;
unsigned int var_41 = 1435145235U;
unsigned int arr_0 [18] [18] ;
signed char arr_2 [18] [18] ;
unsigned short arr_4 [18] [18] ;
int arr_6 [18] [18] ;
long long int arr_9 [18] ;
signed char arr_10 [18] [18] [18] [18] [18] ;
unsigned short arr_11 [18] [18] [18] ;
unsigned int arr_13 [18] [18] [18] ;
signed char arr_15 [18] [18] ;
int arr_18 [18] [18] [18] [18] ;
unsigned long long int arr_19 [18] ;
unsigned long long int arr_22 [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_25 [18] [18] ;
int arr_27 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2644519691U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-7 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)19510;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 1354446016;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 7724902400086501022LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-123 : (signed char)44;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)13651;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 3086232179U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -535172381;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 9362392994563142398ULL : 14980117321847159230ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 16956987791091336900ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? 5346864484433095461ULL : 11211043932219134828ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -1628491882;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
