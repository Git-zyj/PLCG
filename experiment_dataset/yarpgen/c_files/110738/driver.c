#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2783163265U;
long long int var_1 = 6868642543323345771LL;
unsigned int var_2 = 2295738299U;
int var_3 = 199594010;
int var_4 = -1307909813;
signed char var_6 = (signed char)-98;
signed char var_7 = (signed char)90;
unsigned int var_9 = 3545777757U;
short var_10 = (short)-25091;
long long int var_11 = -7545844720839117493LL;
unsigned short var_12 = (unsigned short)27201;
int zero = 0;
unsigned char var_13 = (unsigned char)115;
int var_14 = 376244862;
unsigned short var_15 = (unsigned short)11088;
unsigned char var_16 = (unsigned char)57;
unsigned long long int var_17 = 5108917314223013534ULL;
int var_18 = 947276276;
long long int var_19 = -8040736349010093064LL;
signed char var_20 = (signed char)-43;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 13885648902743710920ULL;
unsigned long long int var_23 = 12982241037662377178ULL;
unsigned long long int var_24 = 10486270847554012815ULL;
unsigned int var_25 = 1506662890U;
long long int var_26 = 6899530573475674365LL;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)46496;
unsigned int var_30 = 1667499969U;
unsigned short var_31 = (unsigned short)47565;
unsigned char var_32 = (unsigned char)6;
_Bool var_33 = (_Bool)1;
long long int var_34 = -1521357002142982103LL;
unsigned char var_35 = (unsigned char)64;
unsigned char var_36 = (unsigned char)150;
short var_37 = (short)6610;
long long int var_38 = -3645600062616190168LL;
long long int var_39 = 7726915654361103790LL;
unsigned short var_40 = (unsigned short)26514;
unsigned char var_41 = (unsigned char)190;
signed char var_42 = (signed char)108;
unsigned int var_43 = 3588784398U;
_Bool var_44 = (_Bool)1;
long long int var_45 = 515678002541909155LL;
unsigned int var_46 = 4160935962U;
unsigned short var_47 = (unsigned short)55849;
long long int var_48 = -5062768447709895424LL;
unsigned short arr_2 [23] ;
long long int arr_3 [23] ;
unsigned int arr_5 [23] ;
unsigned int arr_7 [23] ;
unsigned int arr_8 [23] [23] [23] ;
long long int arr_9 [23] [23] ;
signed char arr_11 [23] ;
unsigned short arr_14 [23] [23] ;
long long int arr_16 [23] [23] [23] [23] [23] ;
unsigned char arr_17 [23] [23] [23] [23] [23] [23] ;
long long int arr_20 [23] [23] [23] [23] [23] ;
unsigned long long int arr_26 [23] [23] [23] ;
short arr_33 [23] [23] ;
int arr_41 [12] [12] ;
unsigned char arr_44 [12] [12] [12] [12] [12] ;
long long int arr_51 [12] [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)57538;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1166119876509913277LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1066298455U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 3251072365U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2276128797U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = -5830922711739116319LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)60539;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = -1324994980029008825LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = -6793853589970660867LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 4774872493636726195ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_33 [i_0] [i_1] = (short)22471;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_41 [i_0] [i_1] = -792936929;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)124 : (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_51 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 8858965932356827075LL : 936435312110796792LL;
}

void checksum() {
    hash(&seed, var_13);
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
