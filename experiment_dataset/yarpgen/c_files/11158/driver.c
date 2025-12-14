#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)3;
signed char var_2 = (signed char)-47;
unsigned short var_4 = (unsigned short)36733;
short var_5 = (short)-15735;
unsigned long long int var_6 = 2462106489926957952ULL;
short var_7 = (short)20066;
unsigned long long int var_8 = 3636316664581510571ULL;
unsigned long long int var_9 = 9705635212128561567ULL;
int var_10 = -1838978032;
unsigned int var_11 = 689407283U;
signed char var_12 = (signed char)-69;
unsigned int var_13 = 1595194020U;
int zero = 0;
unsigned short var_14 = (unsigned short)54152;
signed char var_15 = (signed char)-12;
signed char var_16 = (signed char)-120;
unsigned char var_17 = (unsigned char)114;
short var_18 = (short)24229;
unsigned char var_19 = (unsigned char)215;
unsigned long long int var_20 = 11635986018357871016ULL;
unsigned int var_21 = 1082201297U;
unsigned short var_22 = (unsigned short)60276;
unsigned char var_23 = (unsigned char)56;
unsigned long long int var_24 = 12180799878243578004ULL;
unsigned short var_25 = (unsigned short)25570;
unsigned long long int var_26 = 10202703942646079669ULL;
short var_27 = (short)-4330;
unsigned short var_28 = (unsigned short)46115;
unsigned char var_29 = (unsigned char)164;
unsigned long long int var_30 = 7710998342990158990ULL;
unsigned char var_31 = (unsigned char)99;
unsigned long long int var_32 = 17142811491704168920ULL;
int var_33 = 339778655;
unsigned short var_34 = (unsigned short)64248;
long long int var_35 = -5396924546963335989LL;
unsigned short var_36 = (unsigned short)3391;
unsigned char var_37 = (unsigned char)180;
int var_38 = 752274102;
unsigned short var_39 = (unsigned short)44442;
signed char var_40 = (signed char)-56;
unsigned long long int var_41 = 270169117819197925ULL;
long long int var_42 = -5989856896115357774LL;
unsigned int var_43 = 2857152659U;
short arr_0 [14] ;
_Bool arr_1 [14] [14] ;
unsigned int arr_2 [14] [14] ;
unsigned int arr_4 [12] [12] ;
unsigned char arr_5 [12] [12] ;
_Bool arr_6 [12] ;
unsigned short arr_7 [17] ;
signed char arr_8 [17] [17] ;
unsigned long long int arr_10 [17] [17] ;
short arr_11 [17] [17] [17] ;
signed char arr_13 [17] ;
unsigned short arr_15 [17] ;
long long int arr_16 [15] ;
unsigned char arr_17 [15] ;
unsigned long long int arr_18 [15] [15] ;
unsigned int arr_20 [15] [15] ;
signed char arr_22 [15] [15] [15] ;
unsigned short arr_23 [15] ;
unsigned long long int arr_26 [15] [15] [15] ;
unsigned char arr_28 [15] ;
unsigned long long int arr_35 [11] ;
signed char arr_43 [14] ;
unsigned short arr_51 [25] ;
unsigned long long int arr_53 [25] ;
unsigned int arr_3 [14] [14] ;
unsigned long long int arr_37 [11] ;
unsigned char arr_38 [11] ;
signed char arr_44 [14] [14] ;
unsigned int arr_47 [14] [14] [14] ;
short arr_50 [14] [14] ;
unsigned long long int arr_55 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (short)-23417;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 4065122534U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 561145149U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)15848 : (unsigned short)6540;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 76385652047590368ULL : 6753962084836783677ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-19305;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (unsigned short)60607;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = 2847247965649868510LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = 16564366373861331428ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 723399430U : 2791468440U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned short)5190;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 5129171146337682693ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = 9845263584298933397ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_43 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_51 [i_0] = (unsigned short)6180;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_53 [i_0] = 6483239328051372611ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 2644193739U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_37 [i_0] = 2335972508125102252ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_38 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_44 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = 3375233105U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_50 [i_0] [i_1] = (short)-29448;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? 15000532520868638809ULL : 3615866887529762367ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_50 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_55 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
