#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1977163944;
short var_1 = (short)-28227;
long long int var_2 = -1558306243578167241LL;
short var_4 = (short)-11332;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)121;
unsigned short var_7 = (unsigned short)29355;
unsigned char var_8 = (unsigned char)136;
long long int var_9 = 2328961516581894000LL;
unsigned char var_10 = (unsigned char)234;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-9180;
long long int var_13 = 1950274722036867549LL;
long long int var_14 = 3513507465041855863LL;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 476398057U;
int var_17 = -117299938;
int var_18 = 408344377;
long long int var_19 = -3682093543844977296LL;
signed char var_20 = (signed char)59;
int var_21 = 788922753;
short var_22 = (short)-30945;
long long int var_23 = 1656038164228392278LL;
short var_24 = (short)-17821;
unsigned int var_25 = 2218777895U;
short var_26 = (short)30698;
unsigned int var_27 = 682392011U;
unsigned int var_28 = 664446630U;
signed char var_29 = (signed char)86;
short arr_0 [10] ;
short arr_1 [10] [10] ;
long long int arr_3 [25] ;
unsigned int arr_4 [25] ;
unsigned char arr_6 [25] [25] [25] ;
short arr_7 [25] [25] [25] ;
signed char arr_8 [25] [25] [25] ;
long long int arr_9 [25] [25] [25] [25] ;
unsigned char arr_12 [25] ;
int arr_13 [25] ;
signed char arr_14 [25] ;
int arr_16 [25] [25] ;
signed char arr_18 [25] [25] [25] [25] ;
short arr_19 [25] ;
long long int arr_23 [25] [25] [25] [25] ;
int arr_5 [25] ;
int arr_11 [25] [25] [25] ;
unsigned int arr_20 [25] [25] [25] ;
int arr_24 [25] ;
_Bool arr_25 [25] [25] [25] ;
signed char arr_28 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)-22036;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)29731;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -3069121532358764746LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 3634188883U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)4918;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 9170204905638903707LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 902518413;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 2010565371;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (short)-28100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = 6548571652316968890LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -44961845;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1754994544 : -1951643361;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 336130181U : 3036247307U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 306084560 : 306245152;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (signed char)-119;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
