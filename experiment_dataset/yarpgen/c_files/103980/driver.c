#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7996709136208649301ULL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)223;
unsigned char var_3 = (unsigned char)8;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)51731;
unsigned short var_6 = (unsigned short)31534;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6291156043908156612ULL;
unsigned long long int var_10 = 968238711511152152ULL;
unsigned char var_11 = (unsigned char)5;
unsigned int var_12 = 2348996936U;
long long int var_13 = -399460221302354614LL;
unsigned char var_14 = (unsigned char)34;
int zero = 0;
short var_16 = (short)15860;
short var_17 = (short)6573;
unsigned short var_18 = (unsigned short)19272;
unsigned short var_19 = (unsigned short)64462;
short var_20 = (short)12203;
unsigned long long int var_21 = 10255829137474188754ULL;
short var_22 = (short)-116;
signed char var_23 = (signed char)57;
short var_24 = (short)16181;
short var_25 = (short)-11366;
unsigned short var_26 = (unsigned short)676;
short var_27 = (short)27667;
int var_28 = 1973251188;
_Bool var_29 = (_Bool)1;
short var_30 = (short)5462;
unsigned long long int var_31 = 4205869441208012155ULL;
unsigned long long int arr_0 [12] [12] ;
signed char arr_1 [12] ;
unsigned char arr_4 [25] ;
unsigned long long int arr_8 [25] ;
short arr_9 [25] ;
short arr_10 [25] ;
short arr_13 [25] [25] ;
unsigned char arr_14 [25] [25] [25] ;
signed char arr_24 [11] [11] [11] [11] ;
short arr_2 [12] ;
unsigned char arr_3 [12] ;
short arr_6 [25] [25] ;
signed char arr_15 [25] ;
signed char arr_16 [25] ;
unsigned long long int arr_28 [11] [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 15513534431917285136ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-118 : (signed char)39;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)38 : (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 2158231724528534132ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (short)-1854;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (short)7030;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_13 [i_0] [i_1] = (short)17104;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)32;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)20579 : (short)-28159;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)3 : (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-13267 : (short)-13529;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)-91 : (signed char)-55;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 4802775114521076385ULL : 17788630198398483070ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
