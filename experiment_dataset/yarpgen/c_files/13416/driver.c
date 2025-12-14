#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11600602209126983721ULL;
unsigned char var_2 = (unsigned char)192;
signed char var_3 = (signed char)-35;
int var_4 = 407483088;
unsigned int var_5 = 3726761070U;
unsigned int var_6 = 3569290021U;
short var_7 = (short)-10929;
unsigned long long int var_8 = 3966858836195672342ULL;
short var_9 = (short)18989;
int zero = 0;
unsigned long long int var_10 = 7339685767799161404ULL;
unsigned short var_11 = (unsigned short)60811;
short var_12 = (short)-9553;
long long int var_13 = -3398467269496249566LL;
long long int var_14 = -3415373426235434551LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)64552;
unsigned long long int var_17 = 9968543721713564832ULL;
signed char var_18 = (signed char)48;
unsigned long long int var_19 = 6702649987833778409ULL;
unsigned long long int var_20 = 3413484575822740013ULL;
unsigned int var_21 = 1411847511U;
unsigned short var_22 = (unsigned short)8956;
unsigned int var_23 = 2267010872U;
long long int var_24 = -426273975914459683LL;
short var_25 = (short)11362;
short var_26 = (short)2553;
long long int var_27 = 8351471186326328748LL;
signed char var_28 = (signed char)101;
unsigned char var_29 = (unsigned char)232;
short var_30 = (short)-31480;
unsigned short var_31 = (unsigned short)7034;
signed char var_32 = (signed char)7;
short var_33 = (short)-11530;
short var_34 = (short)-16326;
int var_35 = -104875028;
signed char var_36 = (signed char)-15;
long long int var_37 = 561599499296916404LL;
long long int var_38 = 7381924946229624917LL;
unsigned short var_39 = (unsigned short)7167;
long long int var_40 = 2070694933847051208LL;
long long int var_41 = -5868258373260127228LL;
unsigned long long int var_42 = 2358741280431625321ULL;
long long int arr_1 [17] ;
unsigned long long int arr_2 [17] ;
short arr_3 [17] [17] ;
unsigned long long int arr_4 [17] [17] [17] ;
int arr_5 [17] [17] ;
unsigned long long int arr_7 [17] [17] ;
unsigned long long int arr_9 [17] [17] [17] [17] ;
_Bool arr_10 [17] [17] [17] ;
short arr_12 [17] ;
long long int arr_17 [17] [17] [17] ;
unsigned int arr_20 [17] [17] [17] [17] ;
unsigned short arr_31 [17] [17] ;
unsigned long long int arr_33 [17] [17] [17] [17] ;
long long int arr_34 [17] [17] [17] [17] [17] [17] ;
short arr_41 [17] [17] ;
unsigned int arr_8 [17] [17] [17] [17] ;
unsigned long long int arr_11 [17] [17] [17] [17] ;
unsigned long long int arr_23 [17] [17] [17] ;
signed char arr_36 [17] [17] [17] [17] ;
unsigned long long int arr_37 [17] [17] [17] ;
int arr_55 [17] ;
signed char arr_59 [17] ;
signed char arr_60 [17] ;
int arr_61 [17] ;
unsigned long long int arr_74 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -1110423528952723054LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 10970280064451085476ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-29759;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 10513366299926314729ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1820968499 : 1778762676;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 14664340750835206023ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 10018743846850567083ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (short)17588 : (short)-10050;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 9083994503517566551LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 4058479771U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned short)11795;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = 3966599801396654517ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? -3913128339188541570LL : 7919649308477441523LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_41 [i_0] [i_1] = (short)-28475;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3834931131U : 3797877645U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 1329277246920669079ULL : 13039229386397357597ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 3731362432412339812ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-126 : (signed char)-67;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8003884810705962660ULL : 8286933223031763294ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_55 [i_0] = -1786209634;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_59 [i_0] = (i_0 % 2 == 0) ? (signed char)-38 : (signed char)19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_60 [i_0] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_61 [i_0] = (i_0 % 2 == 0) ? 1901360466 : 1676494222;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_74 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 12909885004077045730ULL : 1821613960340072952ULL;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_59 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_61 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_74 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
