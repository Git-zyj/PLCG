#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4641392266207070074LL;
unsigned long long int var_1 = 17273248909128105862ULL;
long long int var_2 = -4389634974522733937LL;
unsigned long long int var_3 = 5055956740417801539ULL;
long long int var_4 = -3956256331481029967LL;
short var_5 = (short)-13074;
long long int var_6 = 4087062741761018243LL;
short var_7 = (short)9222;
short var_11 = (short)27904;
_Bool var_12 = (_Bool)0;
int var_13 = -1331605026;
unsigned long long int var_15 = 6407573420882316904ULL;
int zero = 0;
short var_16 = (short)32034;
signed char var_17 = (signed char)63;
long long int var_18 = 8935277747346592603LL;
unsigned short var_19 = (unsigned short)63703;
short var_20 = (short)6614;
signed char var_21 = (signed char)-118;
long long int var_22 = 4978904183827975230LL;
short var_23 = (short)4954;
signed char var_24 = (signed char)-84;
unsigned int var_25 = 534873104U;
unsigned char var_26 = (unsigned char)85;
long long int var_27 = -6694651903766954388LL;
unsigned long long int var_28 = 11068831184915203507ULL;
unsigned short var_29 = (unsigned short)55731;
_Bool var_30 = (_Bool)1;
long long int var_31 = 4442201570179246861LL;
short var_32 = (short)-10053;
unsigned int var_33 = 2732256822U;
unsigned long long int var_34 = 18210690989623461334ULL;
unsigned int var_35 = 172259577U;
unsigned int var_36 = 2544436522U;
unsigned char var_37 = (unsigned char)67;
unsigned int var_38 = 1870249325U;
unsigned long long int var_39 = 2058521892185726552ULL;
unsigned short var_40 = (unsigned short)6252;
unsigned short var_41 = (unsigned short)36142;
unsigned long long int var_42 = 9927753103975567128ULL;
long long int arr_0 [17] [17] ;
unsigned char arr_1 [17] ;
signed char arr_3 [25] [25] ;
unsigned long long int arr_4 [25] ;
long long int arr_5 [25] [25] ;
unsigned long long int arr_6 [13] ;
long long int arr_16 [25] [25] [25] ;
unsigned long long int arr_19 [25] ;
int arr_20 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_22 [25] [25] [25] [25] ;
int arr_27 [25] [25] ;
short arr_31 [25] [25] [25] [25] ;
long long int arr_33 [25] [25] [25] [25] ;
unsigned long long int arr_34 [25] [25] [25] [25] [25] ;
signed char arr_35 [25] [25] ;
unsigned int arr_37 [25] [25] [25] ;
short arr_47 [25] [25] [25] ;
signed char arr_51 [25] ;
long long int arr_52 [25] [25] [25] ;
unsigned char arr_60 [25] [25] [25] [25] ;
long long int arr_2 [17] ;
unsigned short arr_8 [13] [13] ;
unsigned long long int arr_9 [13] ;
signed char arr_24 [25] [25] [25] ;
unsigned long long int arr_38 [25] [25] [25] [25] ;
short arr_42 [25] [25] [25] [25] ;
unsigned int arr_43 [25] [25] [25] ;
unsigned long long int arr_44 [25] [25] [25] ;
unsigned short arr_49 [25] [25] ;
signed char arr_54 [25] [25] ;
unsigned long long int arr_58 [25] [25] [25] ;
short arr_61 [25] [25] [25] [25] [25] [25] ;
long long int arr_64 [25] ;
long long int arr_65 [25] [25] [25] [25] ;
unsigned int arr_68 [25] [25] [25] ;
unsigned long long int arr_71 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3526271531679998686LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 4352803208230909054ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -3456598966784083654LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 17225197554319686861ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 1518930384383872690LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = 3207667813553725918ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -975964370;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 7328507996114707531ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = -1556174385;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)-15970;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = -3055650518037425060LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = 17428438305904797167ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_35 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 3685149990U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (short)9287;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_51 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = 7846367947150689800LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 4087797518187061423LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)44933;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = 16719196310171840464ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-27 : (signed char)-107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 2954768825781594912ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-12262 : (short)-20389;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 253794401U : 582221392U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 14302361584058014379ULL : 4120555094458612068ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_49 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)27552 : (unsigned short)2654;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_54 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_58 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 11699657801594176276ULL : 258708561382217836ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)25096;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_64 [i_0] = 7412970543831832688LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = -8969203937302866083LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_68 [i_0] [i_1] [i_2] = 1555862021U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_71 [i_0] = 14255423892548635425ULL;
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
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_54 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_58 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_64 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_65 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_68 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_71 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
