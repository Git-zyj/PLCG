#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)172;
signed char var_1 = (signed char)59;
unsigned char var_2 = (unsigned char)167;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)34;
unsigned char var_5 = (unsigned char)235;
long long int var_6 = 2627368326462772252LL;
unsigned short var_8 = (unsigned short)7360;
int var_9 = 1750087051;
short var_11 = (short)15347;
signed char var_12 = (signed char)-30;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-71;
long long int var_16 = -4353532541916326253LL;
unsigned int var_17 = 3982533092U;
int zero = 0;
int var_19 = 59567126;
unsigned char var_20 = (unsigned char)66;
unsigned int var_21 = 3658558858U;
unsigned int var_22 = 2451561674U;
unsigned int var_23 = 1556452746U;
signed char var_24 = (signed char)85;
unsigned long long int var_25 = 7969092968573740706ULL;
unsigned int var_26 = 1617301438U;
unsigned char var_27 = (unsigned char)156;
signed char var_28 = (signed char)-34;
int var_29 = -1272696836;
long long int var_30 = -5333429393597813369LL;
long long int var_31 = -4799803656767652617LL;
signed char var_32 = (signed char)25;
unsigned long long int var_33 = 13077194982468545425ULL;
signed char var_34 = (signed char)7;
signed char var_35 = (signed char)-90;
unsigned int var_36 = 4281886057U;
_Bool var_37 = (_Bool)0;
unsigned short var_38 = (unsigned short)14593;
unsigned char var_39 = (unsigned char)146;
unsigned char var_40 = (unsigned char)156;
int var_41 = -1391892280;
_Bool var_42 = (_Bool)1;
int var_43 = -510112123;
unsigned char var_44 = (unsigned char)38;
signed char var_45 = (signed char)36;
long long int var_46 = -7476598258963607914LL;
_Bool arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
unsigned char arr_2 [13] [13] [13] ;
long long int arr_3 [13] [13] [13] ;
unsigned int arr_4 [13] ;
short arr_5 [13] [13] [13] ;
unsigned char arr_6 [13] [13] [13] [13] ;
_Bool arr_7 [13] [13] [13] [13] ;
long long int arr_9 [13] [13] [13] ;
unsigned short arr_10 [13] [13] [13] ;
int arr_11 [13] [13] [13] ;
int arr_12 [13] [13] [13] ;
unsigned int arr_13 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_15 [13] [13] [13] ;
long long int arr_16 [13] [13] ;
unsigned int arr_17 [13] [13] [13] [13] [13] [13] [13] ;
unsigned short arr_18 [13] [13] [13] [13] [13] ;
unsigned short arr_27 [20] ;
long long int arr_28 [20] [20] ;
long long int arr_30 [20] ;
unsigned int arr_31 [20] [20] ;
unsigned int arr_32 [20] ;
long long int arr_33 [20] ;
signed char arr_34 [20] ;
unsigned long long int arr_36 [20] [20] ;
_Bool arr_37 [20] ;
long long int arr_42 [20] [20] [20] [20] ;
unsigned int arr_45 [20] [20] [20] [20] [20] ;
unsigned short arr_20 [13] [13] [13] [13] ;
unsigned short arr_25 [13] [13] [13] [13] [13] [13] ;
long long int arr_26 [13] [13] [13] ;
long long int arr_40 [20] [20] [20] [20] ;
unsigned int arr_47 [20] [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1145898104926716199LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 3695250643U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-10002;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3036547826576249837LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)3285;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 497751224;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1057629142;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 1091189052U : 806610842U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)195 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = 1047378884180723657LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 4271863457U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)13542;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (unsigned short)35982;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_28 [i_0] [i_1] = -6419734702438765462LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_30 [i_0] = -1370750829684114191LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_31 [i_0] [i_1] = 3748443139U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_32 [i_0] = 1749373853U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_33 [i_0] = -8963605372047107884LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_34 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_36 [i_0] [i_1] = 6777256041776736394ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_37 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = -3549249420407147532LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = 334899362U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)63020 : (unsigned short)23517;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)44961 : (unsigned short)18834;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3398322080489671473LL : -5222243300354196900LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -76723800785956487LL : -8020601982097548718LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = 331677048U;
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
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
