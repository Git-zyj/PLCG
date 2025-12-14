#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 9498117086957779563ULL;
signed char var_4 = (signed char)80;
int var_5 = 1328290918;
signed char var_6 = (signed char)16;
unsigned long long int var_7 = 731781362426720189ULL;
unsigned long long int var_8 = 5580082843253460841ULL;
int var_9 = -812076647;
unsigned long long int var_10 = 3109916489840601895ULL;
unsigned long long int var_11 = 3702282713315911177ULL;
unsigned int var_12 = 3094879052U;
unsigned long long int var_13 = 14753108346334846743ULL;
int var_14 = 1043262099;
int zero = 0;
unsigned long long int var_15 = 18236041524259682097ULL;
unsigned long long int var_16 = 3302721100830427500ULL;
int var_17 = -1853470189;
signed char var_18 = (signed char)-63;
signed char var_19 = (signed char)-14;
signed char var_20 = (signed char)-109;
int var_21 = -302120483;
unsigned long long int var_22 = 2253511176209552888ULL;
signed char var_23 = (signed char)-80;
int var_24 = -2040746534;
signed char var_25 = (signed char)-58;
unsigned long long int var_26 = 1624467625854211189ULL;
signed char var_27 = (signed char)-80;
unsigned long long int var_28 = 12550098977837534415ULL;
int var_29 = -357980619;
short var_30 = (short)-25233;
unsigned int var_31 = 2869772356U;
unsigned long long int arr_0 [10] ;
unsigned char arr_1 [10] ;
int arr_3 [10] [10] [10] ;
short arr_7 [10] [10] [10] [10] ;
long long int arr_14 [10] [10] [10] [10] [10] [10] ;
unsigned long long int arr_15 [10] [10] [10] ;
unsigned int arr_22 [14] ;
int arr_23 [14] ;
unsigned char arr_26 [14] [14] [14] ;
unsigned long long int arr_27 [14] [14] [14] ;
unsigned char arr_28 [14] [14] ;
unsigned short arr_2 [10] ;
int arr_19 [10] [10] [10] [10] ;
short arr_24 [14] ;
unsigned int arr_29 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2889058201994290136ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 541920985 : 1028732931;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)-12389;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 3554595723520789009LL : -5026424041781353120LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10854641097129095467ULL : 7061813795805659543ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = 4192496350U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_23 [i_0] = 1858917020;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 5934187198424081985ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)8375 : (unsigned short)39492;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 640705542 : 937912890;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_24 [i_0] = (short)4737;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 175902509U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_19 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
