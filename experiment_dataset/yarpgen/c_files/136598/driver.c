#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 4014280496U;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3203347331U;
unsigned short var_16 = (unsigned short)46548;
int zero = 0;
short var_18 = (short)-4706;
short var_19 = (short)-17956;
unsigned char var_20 = (unsigned char)175;
unsigned int var_21 = 10407727U;
unsigned int var_22 = 2531351985U;
_Bool var_23 = (_Bool)0;
int var_24 = -56396351;
unsigned char var_25 = (unsigned char)184;
unsigned int var_26 = 1836971736U;
_Bool var_27 = (_Bool)1;
signed char var_28 = (signed char)127;
signed char var_29 = (signed char)3;
long long int var_30 = 225021552549920242LL;
long long int var_31 = -7986123527321951426LL;
signed char var_32 = (signed char)-33;
_Bool var_33 = (_Bool)0;
unsigned int var_34 = 409768551U;
_Bool var_35 = (_Bool)1;
unsigned int var_36 = 2960625702U;
unsigned long long int var_37 = 16930618202623124562ULL;
short var_38 = (short)14658;
_Bool var_39 = (_Bool)0;
_Bool var_40 = (_Bool)0;
unsigned int var_41 = 19134074U;
unsigned char var_42 = (unsigned char)167;
unsigned char var_43 = (unsigned char)151;
unsigned long long int var_44 = 17603955901932710931ULL;
unsigned long long int var_45 = 16443871495789177128ULL;
short var_46 = (short)-13088;
signed char var_47 = (signed char)-84;
long long int var_48 = 6075848650977897867LL;
long long int var_49 = 8022313220813782077LL;
short var_50 = (short)-3642;
signed char var_51 = (signed char)102;
int var_52 = 832077346;
_Bool var_53 = (_Bool)1;
unsigned char var_54 = (unsigned char)67;
short var_55 = (short)-15885;
unsigned int var_56 = 2392064631U;
_Bool var_57 = (_Bool)1;
unsigned long long int var_58 = 12259446693347841418ULL;
unsigned int var_59 = 3359102250U;
unsigned int var_60 = 5128165U;
unsigned int var_61 = 617917371U;
long long int var_62 = -4023511613309182810LL;
short arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned short arr_2 [21] ;
unsigned int arr_4 [21] [21] ;
int arr_5 [21] [21] ;
long long int arr_7 [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] ;
signed char arr_9 [21] ;
unsigned long long int arr_10 [21] [21] ;
short arr_11 [21] [21] [21] [21] [21] ;
unsigned int arr_12 [21] [21] [21] [21] [21] ;
unsigned char arr_13 [21] [21] [21] ;
signed char arr_14 [21] ;
int arr_16 [21] [21] [21] ;
short arr_17 [21] [21] [21] [21] [21] ;
_Bool arr_19 [21] [21] [21] ;
int arr_21 [21] [21] [21] [21] [21] ;
short arr_26 [21] [21] [21] [21] ;
int arr_38 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_40 [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-7030;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 7283040420102016843ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)6079;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 2721762069U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -307755357;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 6735132471785167063LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 993481343U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 18124491253012725122ULL : 9383214771260370205ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-17708;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 2778169178U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -2109019100 : -1460355578;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-7853;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = -845873303;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)16311 : (short)25658;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -194680323;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)170;
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
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
