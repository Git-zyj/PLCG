#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14297911906526190929ULL;
long long int var_1 = -7454029957841311556LL;
unsigned int var_2 = 1182063350U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)7769;
unsigned long long int var_5 = 71384991176761550ULL;
unsigned short var_6 = (unsigned short)3507;
unsigned char var_7 = (unsigned char)28;
int var_8 = 1619866408;
unsigned short var_9 = (unsigned short)30579;
long long int var_12 = 332993628617551862LL;
signed char var_13 = (signed char)-19;
long long int var_15 = -5799863814526360131LL;
int var_17 = -1180236650;
unsigned long long int var_18 = 2967647880753297419ULL;
int zero = 0;
unsigned long long int var_19 = 11121326589346126122ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)698;
unsigned char var_22 = (unsigned char)81;
short var_23 = (short)-19116;
short var_24 = (short)30918;
unsigned short var_25 = (unsigned short)60876;
long long int var_26 = -6217565174960356069LL;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 7913925161467743774ULL;
long long int var_29 = -6874253121988169159LL;
int var_30 = -56796790;
short var_31 = (short)15264;
int var_32 = -546189045;
int var_33 = 703206872;
unsigned char var_34 = (unsigned char)239;
long long int var_35 = 8507073410122998638LL;
int var_36 = -321892617;
unsigned long long int var_37 = 10489989425101407650ULL;
int var_38 = -729315709;
short var_39 = (short)-14295;
long long int var_40 = 777279547979769470LL;
unsigned int var_41 = 1205461498U;
unsigned long long int var_42 = 487831112524893749ULL;
_Bool var_43 = (_Bool)0;
long long int var_44 = -6397979786938761778LL;
unsigned long long int arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
int arr_4 [14] ;
unsigned int arr_5 [14] [14] ;
unsigned int arr_9 [17] [17] ;
unsigned int arr_20 [17] [17] [17] [17] [17] ;
unsigned long long int arr_21 [17] [17] [17] ;
int arr_40 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 16471188233737794631ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 15769665271353557286ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -395806555;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = 406450425U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = 1705728170U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 3971767606U : 2709531016U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 2506642919847225039ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = -390391467;
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
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
