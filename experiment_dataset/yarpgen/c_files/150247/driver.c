#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5351386577850329380LL;
long long int var_1 = 7139543741440507995LL;
short var_2 = (short)27167;
short var_3 = (short)20233;
short var_4 = (short)-25350;
unsigned short var_5 = (unsigned short)5681;
short var_6 = (short)6030;
unsigned int var_9 = 3969133205U;
unsigned short var_10 = (unsigned short)34427;
unsigned long long int var_11 = 14433555415579342610ULL;
int zero = 0;
long long int var_12 = 4440236002017541132LL;
unsigned int var_13 = 183352554U;
short var_14 = (short)-13949;
unsigned int var_15 = 4286974295U;
unsigned int var_16 = 630732813U;
unsigned long long int var_17 = 12083033680180447880ULL;
int var_18 = -301887535;
unsigned long long int var_19 = 12817267160936355234ULL;
unsigned int var_20 = 1450722769U;
short var_21 = (short)845;
unsigned int var_22 = 1503820721U;
unsigned int var_23 = 2336970205U;
unsigned int var_24 = 2326629300U;
int var_25 = 952934581;
short var_26 = (short)-12893;
unsigned int var_27 = 1119449604U;
long long int var_28 = -4074290780143829605LL;
short var_29 = (short)-19162;
int var_30 = 1478930591;
unsigned short var_31 = (unsigned short)63950;
unsigned int var_32 = 1836464721U;
unsigned int var_33 = 4194846505U;
short arr_0 [10] ;
_Bool arr_5 [10] [10] [10] ;
unsigned short arr_10 [10] [10] [10] [10] [10] ;
unsigned short arr_18 [10] [10] ;
long long int arr_21 [10] [10] [10] [10] ;
unsigned short arr_29 [10] ;
unsigned short arr_46 [11] [11] ;
unsigned int arr_48 [21] ;
unsigned int arr_50 [21] [21] ;
unsigned int arr_51 [21] ;
unsigned int arr_13 [10] [10] [10] [10] ;
unsigned long long int arr_17 [10] [10] [10] ;
short arr_31 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)15069;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)6291;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)19998 : (unsigned short)28585;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -6228314334363001066LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_29 [i_0] = (unsigned short)24237;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned short)21156;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_48 [i_0] = 1849054018U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_50 [i_0] [i_1] = 2151200818U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_51 [i_0] = 1268231865U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3355091952U : 2553176526U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 17601986905538649989ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_31 [i_0] = (short)-24297;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
