#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1482810509;
unsigned long long int var_1 = 18355006474068920522ULL;
unsigned int var_4 = 3999588159U;
unsigned long long int var_5 = 17100114047440938976ULL;
unsigned long long int var_6 = 12816782515061756931ULL;
unsigned int var_7 = 522850752U;
unsigned int var_8 = 42115294U;
long long int var_9 = 7925294582755409745LL;
int var_10 = 1539805008;
int var_11 = -2073923478;
unsigned long long int var_12 = 3972450181685480643ULL;
unsigned long long int var_14 = 5014767269542301693ULL;
signed char var_15 = (signed char)-112;
int var_17 = -318770647;
int var_18 = -423433496;
unsigned short var_19 = (unsigned short)22213;
int zero = 0;
int var_20 = 498080040;
unsigned long long int var_21 = 2246000791633533070ULL;
long long int var_22 = 4981564770159665622LL;
int var_23 = -881188385;
unsigned long long int var_24 = 1719619086918227764ULL;
unsigned int var_25 = 746925639U;
int var_26 = 726218315;
unsigned long long int var_27 = 14536629238256789179ULL;
signed char var_28 = (signed char)-58;
unsigned int var_29 = 39968674U;
signed char var_30 = (signed char)-30;
unsigned short var_31 = (unsigned short)57653;
int arr_1 [10] [10] ;
unsigned short arr_2 [10] ;
unsigned int arr_3 [10] ;
long long int arr_5 [10] ;
int arr_20 [10] [10] [10] ;
unsigned short arr_26 [10] [10] [10] ;
unsigned int arr_31 [14] ;
unsigned long long int arr_32 [14] ;
unsigned long long int arr_34 [14] [14] [14] ;
unsigned int arr_36 [14] [14] [14] [14] ;
unsigned short arr_41 [21] ;
unsigned long long int arr_4 [10] ;
unsigned long long int arr_9 [10] ;
int arr_10 [10] [10] ;
unsigned int arr_11 [10] [10] [10] ;
unsigned long long int arr_12 [10] ;
int arr_17 [10] ;
int arr_18 [10] [10] [10] ;
long long int arr_25 [10] [10] [10] [10] [10] ;
unsigned long long int arr_30 [10] [10] ;
unsigned int arr_37 [14] ;
unsigned int arr_38 [14] [14] [14] ;
unsigned long long int arr_39 [14] ;
unsigned int arr_43 [21] ;
signed char arr_44 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = -1345539199;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)693;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 3271184167U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -8514979276055795807LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1416678211;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (unsigned short)6570;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_31 [i_0] = 1207276223U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = 17823417472286115767ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 8514072591830290440ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4038015700U : 415408995U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_41 [i_0] = (unsigned short)29654;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1135062664977596360ULL : 4041684761048725455ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7868973900284295721ULL : 2129980059551193419ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1844678726 : 156378237;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 464325217U : 1590582628U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3826604514723796160ULL : 13722049386182209477ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 290702254 : 704078533;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -125185824 : 983107491;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -2405764089526213867LL : -1702088124871968769LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_30 [i_0] [i_1] = 18139290153667382550ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? 517624300U : 3952791540U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2137563304U : 2183399354U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_39 [i_0] = 8351962654956093134ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_43 [i_0] = 2337471797U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_44 [i_0] = (signed char)24;
}

void checksum() {
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
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_18 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
