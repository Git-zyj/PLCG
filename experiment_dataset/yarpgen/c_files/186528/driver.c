#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2390692465U;
unsigned long long int var_5 = 8229148469296718608ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)9086;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)203;
long long int var_12 = -7368175868537412151LL;
int zero = 0;
short var_14 = (short)11253;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)30655;
short var_18 = (short)-5973;
unsigned char var_19 = (unsigned char)132;
signed char var_20 = (signed char)-101;
unsigned short var_21 = (unsigned short)23527;
unsigned long long int var_22 = 13405790684086661609ULL;
unsigned int var_23 = 3931333102U;
unsigned char var_24 = (unsigned char)155;
unsigned short var_25 = (unsigned short)8819;
signed char var_26 = (signed char)-76;
unsigned short var_27 = (unsigned short)28914;
short var_28 = (short)2717;
unsigned char var_29 = (unsigned char)209;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 2481455601U;
_Bool var_32 = (_Bool)0;
long long int var_33 = -1081090840181789495LL;
unsigned short var_34 = (unsigned short)57516;
unsigned long long int var_35 = 11947626402289056093ULL;
unsigned short var_36 = (unsigned short)50645;
unsigned short var_37 = (unsigned short)36654;
unsigned long long int var_38 = 14321951328416741096ULL;
int var_39 = 182831;
unsigned long long int var_40 = 17727281955531646731ULL;
unsigned int var_41 = 357274663U;
short var_42 = (short)24340;
long long int var_43 = -7704479799633483257LL;
long long int var_44 = -4802690264796327033LL;
unsigned short var_45 = (unsigned short)57541;
unsigned long long int var_46 = 2497558374017540566ULL;
unsigned char var_47 = (unsigned char)84;
_Bool var_48 = (_Bool)1;
unsigned long long int var_49 = 7764814657851433702ULL;
long long int var_50 = 3021900618941933892LL;
unsigned short var_51 = (unsigned short)10017;
unsigned short var_52 = (unsigned short)29591;
_Bool var_53 = (_Bool)0;
unsigned short var_54 = (unsigned short)62591;
long long int var_55 = 1033229050420831643LL;
unsigned long long int var_56 = 14459278062065668212ULL;
_Bool arr_0 [16] ;
int arr_1 [16] ;
_Bool arr_3 [23] ;
short arr_4 [23] ;
long long int arr_5 [23] [23] ;
unsigned long long int arr_6 [23] ;
long long int arr_7 [23] ;
unsigned short arr_8 [23] ;
_Bool arr_9 [23] ;
long long int arr_11 [23] [23] [23] ;
long long int arr_13 [23] [23] [23] [23] ;
_Bool arr_14 [23] [23] ;
signed char arr_15 [23] [23] [23] ;
int arr_16 [23] [23] ;
short arr_17 [23] ;
unsigned long long int arr_18 [23] ;
long long int arr_19 [23] [23] [23] ;
unsigned char arr_21 [23] [23] [23] [23] ;
unsigned char arr_23 [23] [23] ;
unsigned char arr_27 [23] ;
unsigned long long int arr_30 [23] [23] [23] [23] [23] ;
_Bool arr_33 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_34 [23] [23] [23] [23] [23] [23] ;
unsigned char arr_36 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -69828587;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (short)-31927;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 3441930113663449977LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 17395074979445637195ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 1636082968038304566LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)57658;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 6182769560630672343LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = -866624531871535548LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = 612089108;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (short)-28774;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_18 [i_0] = 17504436457342234916ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 8845196544015101608LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 10892399095607210182ULL : 3318782140871492632ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 900070892U : 3771010966U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)221;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
