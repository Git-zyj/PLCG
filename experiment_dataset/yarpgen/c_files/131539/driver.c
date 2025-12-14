#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7919359207915781230LL;
unsigned char var_1 = (unsigned char)194;
signed char var_2 = (signed char)14;
signed char var_3 = (signed char)68;
unsigned char var_4 = (unsigned char)93;
unsigned short var_5 = (unsigned short)9081;
signed char var_13 = (signed char)-41;
signed char var_16 = (signed char)86;
unsigned short var_17 = (unsigned short)39864;
int zero = 0;
unsigned short var_18 = (unsigned short)34640;
unsigned short var_19 = (unsigned short)26828;
unsigned char var_20 = (unsigned char)149;
unsigned int var_21 = 114068295U;
unsigned short var_22 = (unsigned short)27013;
unsigned int var_23 = 1235691127U;
signed char var_24 = (signed char)73;
unsigned short var_25 = (unsigned short)26503;
unsigned int var_26 = 818876221U;
unsigned char var_27 = (unsigned char)29;
unsigned char var_28 = (unsigned char)153;
signed char var_29 = (signed char)87;
int var_30 = 1291104133;
unsigned short var_31 = (unsigned short)37683;
unsigned short var_32 = (unsigned short)50905;
unsigned char var_33 = (unsigned char)189;
long long int var_34 = -5721213954012493701LL;
unsigned char var_35 = (unsigned char)202;
signed char var_36 = (signed char)-118;
unsigned short var_37 = (unsigned short)17691;
unsigned short var_38 = (unsigned short)11697;
unsigned char var_39 = (unsigned char)189;
long long int var_40 = 4266755185883798775LL;
signed char var_41 = (signed char)3;
signed char var_42 = (signed char)-79;
signed char var_43 = (signed char)69;
unsigned short var_44 = (unsigned short)20579;
unsigned char arr_1 [24] [24] ;
signed char arr_4 [24] ;
unsigned short arr_5 [24] [24] ;
unsigned char arr_6 [24] ;
unsigned char arr_7 [24] [24] ;
unsigned short arr_8 [25] ;
long long int arr_9 [25] [25] ;
signed char arr_11 [25] [25] ;
signed char arr_12 [25] ;
signed char arr_13 [25] ;
unsigned char arr_16 [25] [25] [25] [25] ;
unsigned char arr_17 [25] ;
unsigned char arr_18 [25] [25] [25] [25] ;
long long int arr_21 [25] [25] ;
signed char arr_22 [25] [25] [25] [25] [25] ;
signed char arr_31 [25] ;
unsigned short arr_33 [25] [25] [25] ;
signed char arr_34 [25] [25] [25] [25] ;
long long int arr_36 [25] [25] [25] [25] [25] [25] ;
int arr_40 [25] ;
long long int arr_41 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)2862;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned short)3114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = -4695685060620644528LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-117 : (signed char)-56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 293377748586106800LL : -8991853342887877194LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (signed char)125 : (signed char)23;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (unsigned short)3101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-68 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 698928531146694652LL : -154364780740114344LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? 1620279710 : -1293657359;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? 9187085245963483270LL : -7857912689501936869LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
