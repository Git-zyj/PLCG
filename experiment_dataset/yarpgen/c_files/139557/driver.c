#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
int var_1 = -141625167;
unsigned long long int var_2 = 1095154867361972624ULL;
unsigned short var_3 = (unsigned short)52320;
long long int var_4 = 7268152302174974661LL;
unsigned long long int var_6 = 16012557967520217193ULL;
int var_7 = 940927379;
unsigned long long int var_9 = 13830617396846174334ULL;
unsigned short var_10 = (unsigned short)18070;
int var_11 = -724939827;
short var_13 = (short)15349;
unsigned long long int var_14 = 2195868099728074675ULL;
unsigned long long int var_15 = 5328303870099643636ULL;
int zero = 0;
int var_17 = -961562728;
_Bool var_18 = (_Bool)1;
int var_19 = -1644967476;
int var_20 = -493211847;
unsigned int var_21 = 2299518422U;
int var_22 = 1683159665;
short var_23 = (short)19652;
unsigned long long int var_24 = 9777373862522472999ULL;
unsigned long long int var_25 = 7682132922467658123ULL;
unsigned long long int var_26 = 17827506154946681023ULL;
unsigned char var_27 = (unsigned char)1;
unsigned long long int var_28 = 4996755598505062486ULL;
unsigned long long int var_29 = 5602415754195730393ULL;
int var_30 = 1778659180;
unsigned long long int var_31 = 18052948386024026279ULL;
unsigned long long int var_32 = 3550440559616770468ULL;
signed char var_33 = (signed char)124;
int var_34 = -728547178;
unsigned long long int var_35 = 7538855465957636092ULL;
unsigned short arr_0 [17] [17] ;
unsigned long long int arr_1 [17] ;
unsigned long long int arr_2 [17] [17] ;
signed char arr_5 [10] ;
unsigned long long int arr_6 [10] ;
unsigned int arr_10 [10] ;
unsigned char arr_12 [10] [10] ;
int arr_15 [10] [10] [10] ;
int arr_17 [10] [10] [10] [10] ;
long long int arr_20 [10] [10] [10] [10] [10] [10] ;
unsigned char arr_4 [17] ;
unsigned long long int arr_8 [10] ;
signed char arr_9 [10] [10] ;
int arr_19 [10] [10] [10] [10] ;
unsigned short arr_22 [10] [10] [10] ;
unsigned char arr_29 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)48697 : (unsigned short)51728;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 14357348118816775968ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 10664912698658036987ULL : 11254538066677965221ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 759071325011772538ULL : 8498440631689919210ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 1530980913U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1737497101 : -1666936895;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -1647150131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 375026154917910659LL : 292296443763644631LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)5 : (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 655986982806291196ULL : 568157427746830871ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-79 : (signed char)-103;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -2132139251 : -92528427;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)40296 : (unsigned short)17313;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned char)156 : (unsigned char)177;
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
