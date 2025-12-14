#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -997310544;
signed char var_2 = (signed char)-11;
int var_3 = 1529944904;
unsigned short var_4 = (unsigned short)46461;
signed char var_5 = (signed char)123;
int var_6 = 2136751455;
int var_7 = -545192899;
unsigned short var_8 = (unsigned short)37283;
unsigned short var_9 = (unsigned short)6616;
unsigned short var_10 = (unsigned short)46425;
long long int var_11 = -7652631469165628348LL;
unsigned int var_12 = 1260900451U;
int var_13 = -1087644405;
unsigned long long int var_14 = 9052482521670541929ULL;
unsigned char var_15 = (unsigned char)161;
unsigned long long int var_16 = 6279695490570213005ULL;
int zero = 0;
signed char var_17 = (signed char)11;
unsigned short var_18 = (unsigned short)65306;
unsigned short var_19 = (unsigned short)51984;
unsigned long long int var_20 = 4926788591431889065ULL;
signed char var_21 = (signed char)-103;
unsigned int var_22 = 3576795847U;
unsigned char var_23 = (unsigned char)198;
unsigned long long int var_24 = 17459240686361800521ULL;
unsigned char var_25 = (unsigned char)83;
signed char var_26 = (signed char)26;
unsigned long long int var_27 = 12112884972826580319ULL;
signed char var_28 = (signed char)-116;
signed char var_29 = (signed char)-94;
unsigned long long int var_30 = 1922528021278448608ULL;
unsigned char var_31 = (unsigned char)4;
unsigned char var_32 = (unsigned char)238;
signed char arr_0 [21] ;
unsigned long long int arr_1 [21] ;
signed char arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
unsigned short arr_4 [21] [21] ;
unsigned char arr_5 [19] ;
unsigned short arr_6 [19] ;
unsigned long long int arr_8 [17] [17] ;
unsigned short arr_10 [24] ;
int arr_11 [24] ;
unsigned short arr_13 [22] ;
unsigned int arr_14 [22] [22] ;
unsigned char arr_16 [20] [20] ;
unsigned short arr_17 [20] ;
unsigned short arr_19 [20] [20] ;
unsigned short arr_20 [20] ;
long long int arr_22 [20] [20] [20] [20] ;
signed char arr_24 [20] [20] [20] [20] [20] ;
short arr_25 [20] [20] [20] [20] [20] [20] ;
int arr_26 [20] [20] [20] [20] [20] ;
long long int arr_9 [17] ;
long long int arr_12 [24] [24] ;
unsigned short arr_15 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 9852924538712435609ULL : 11742400841982799622ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)41749;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)33704 : (unsigned short)3764;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39720 : (unsigned short)38139;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 11316007765181942972ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)49572;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = 124464709;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned short)55720;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = 1491772667U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (unsigned short)21499;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)15135;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned short)53366;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -4138404960184551062LL : 1042134869601252721LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-104 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-14253;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 16799838;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 9012881540502354098LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = -4874720518460270916LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (unsigned short)63454;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
