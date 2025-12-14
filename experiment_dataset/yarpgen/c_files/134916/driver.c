#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -2774308162147116677LL;
unsigned short var_2 = (unsigned short)12181;
unsigned short var_3 = (unsigned short)1683;
int var_4 = -1391191926;
_Bool var_5 = (_Bool)1;
int var_6 = 1346913097;
_Bool var_7 = (_Bool)0;
int var_8 = -1282452052;
long long int var_9 = 1330961632122235840LL;
short var_10 = (short)28150;
_Bool var_11 = (_Bool)1;
int var_12 = -1480662590;
_Bool var_13 = (_Bool)0;
int var_14 = -616457275;
int zero = 0;
short var_15 = (short)-4676;
short var_16 = (short)-31402;
unsigned short var_17 = (unsigned short)3491;
short var_18 = (short)14347;
short var_19 = (short)28319;
int var_20 = -457732464;
unsigned short var_21 = (unsigned short)61406;
int var_22 = -1225446374;
unsigned short var_23 = (unsigned short)60291;
unsigned int var_24 = 2402983756U;
short var_25 = (short)-5387;
unsigned short var_26 = (unsigned short)50946;
int var_27 = 43447600;
int var_28 = 927579409;
unsigned int var_29 = 3495225104U;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 2171379280U;
short var_32 = (short)23173;
unsigned int var_33 = 4180924734U;
unsigned long long int var_34 = 12997810097578859346ULL;
unsigned long long int var_35 = 11285657683551253261ULL;
long long int var_36 = -4404928959519066149LL;
_Bool var_37 = (_Bool)1;
int var_38 = 222056530;
unsigned int var_39 = 3443055855U;
unsigned short var_40 = (unsigned short)19361;
long long int var_41 = -1141070858352524536LL;
short var_42 = (short)19974;
short arr_0 [10] [10] ;
unsigned int arr_2 [10] [10] ;
int arr_3 [10] [10] ;
int arr_4 [10] [10] [10] ;
int arr_5 [10] [10] [10] ;
unsigned short arr_7 [10] [10] [10] [10] ;
unsigned short arr_8 [10] [10] [10] [10] [10] [10] ;
_Bool arr_10 [10] [10] [10] [10] ;
_Bool arr_11 [10] [10] [10] [10] ;
int arr_13 [10] [10] [10] ;
long long int arr_14 [10] [10] [10] [10] ;
int arr_16 [10] ;
int arr_17 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)31131;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 2056798958U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 623181611;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1733892146;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -149015682;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned short)17886;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)39690;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 736195051;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -6980365739705560758LL : -4405104744186472683LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -384123392 : -1145802226;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -672245860;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
