#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5481258751923292632LL;
long long int var_3 = -5683590098678725843LL;
unsigned int var_5 = 1889632509U;
long long int var_7 = 3650615599703518107LL;
short var_10 = (short)14851;
int var_16 = 1535969871;
int zero = 0;
unsigned long long int var_17 = 13174163003877643897ULL;
int var_18 = 1549735608;
long long int var_19 = -1929311022346866920LL;
short var_20 = (short)-8354;
unsigned char var_21 = (unsigned char)191;
long long int var_22 = -7013880337059970503LL;
unsigned long long int var_23 = 5625111854716970914ULL;
long long int var_24 = 8069040373808071306LL;
int var_25 = 1175886038;
unsigned long long int var_26 = 14088303420138324112ULL;
int var_27 = 1123031264;
unsigned long long int var_28 = 15240140528960221372ULL;
long long int var_29 = 394549667127828260LL;
unsigned char var_30 = (unsigned char)112;
unsigned long long int var_31 = 4207818089621671753ULL;
unsigned long long int var_32 = 13881085474164384916ULL;
short var_33 = (short)-13263;
unsigned char var_34 = (unsigned char)129;
int var_35 = 932851127;
long long int arr_0 [24] [24] ;
long long int arr_1 [24] [24] ;
int arr_3 [24] ;
unsigned long long int arr_9 [18] ;
int arr_10 [18] ;
unsigned char arr_15 [12] ;
int arr_16 [12] [12] [12] ;
short arr_17 [12] [12] ;
unsigned long long int arr_21 [12] ;
unsigned char arr_22 [12] ;
int arr_24 [12] [12] [12] [12] [12] ;
int arr_25 [12] [12] [12] ;
short arr_26 [12] [12] [12] [12] [12] ;
long long int arr_44 [20] [20] ;
long long int arr_45 [20] [20] ;
unsigned long long int arr_4 [24] [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
unsigned int arr_12 [18] [18] ;
int arr_18 [12] [12] ;
int arr_19 [12] [12] [12] ;
unsigned char arr_28 [12] [12] ;
short arr_29 [12] [12] [12] ;
unsigned char arr_33 [12] [12] ;
unsigned int arr_34 [12] [12] [12] [12] ;
long long int arr_40 [12] [12] [12] ;
unsigned long long int arr_41 [12] ;
int arr_46 [20] [20] ;
int arr_47 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -5598883743872560088LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 2842878614345883932LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1244489739;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 5038436779098847553ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = -450906684;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 717343114;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (short)7479;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_21 [i_0] = 8507923693200902583ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_22 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -460225772 : -1654540732;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -918825634;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-279;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_44 [i_0] [i_1] = -6251765907906001866LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_45 [i_0] [i_1] = 1137253614890344265LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 16844580653414483233ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 17414373437351096660ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 4003939197U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_18 [i_0] [i_1] = 1131079844;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = -920880303;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)165 : (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)8173 : (short)26713;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 4131523666U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = -2020926562806634610LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_41 [i_0] = 16327252897239536383ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_46 [i_0] [i_1] = 1979002614;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_47 [i_0] = -1440328769;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_47 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
