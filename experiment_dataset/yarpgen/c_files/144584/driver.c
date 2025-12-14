#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12380491836052043792ULL;
unsigned long long int var_1 = 16606573225156509840ULL;
unsigned long long int var_2 = 13706582767765923816ULL;
unsigned long long int var_3 = 3756833840526815256ULL;
unsigned long long int var_5 = 10887741694453738624ULL;
unsigned long long int var_6 = 9913243722043575634ULL;
unsigned long long int var_7 = 1763603763208939691ULL;
unsigned long long int var_9 = 8584765134147041093ULL;
unsigned long long int var_10 = 5910526462239110054ULL;
unsigned long long int var_11 = 9853189404878883046ULL;
unsigned long long int var_12 = 14359239960170996822ULL;
unsigned long long int var_13 = 11393553284297020584ULL;
unsigned long long int var_14 = 11633390187233364131ULL;
int zero = 0;
unsigned long long int var_16 = 7429233582401154653ULL;
unsigned long long int var_17 = 16735370361313368555ULL;
unsigned long long int var_18 = 2497773976447144511ULL;
unsigned long long int var_19 = 9853497245850585761ULL;
unsigned long long int var_20 = 10270342795940170444ULL;
unsigned long long int var_21 = 7678537378663018026ULL;
unsigned long long int var_22 = 10479144026638168931ULL;
unsigned long long int var_23 = 8469229054063227403ULL;
unsigned long long int var_24 = 7109553524109989553ULL;
unsigned long long int var_25 = 606728129995757646ULL;
unsigned long long int var_26 = 4816826091409877958ULL;
unsigned long long int var_27 = 10172414930888455491ULL;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_6 [23] ;
unsigned long long int arr_13 [23] [23] ;
unsigned long long int arr_14 [23] [23] ;
unsigned long long int arr_20 [25] ;
unsigned long long int arr_22 [25] [25] [25] [25] ;
unsigned long long int arr_24 [25] ;
unsigned long long int arr_28 [25] [25] [25] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] ;
unsigned long long int arr_15 [23] [23] ;
unsigned long long int arr_29 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 5587893415239847425ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 12395397079905203071ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 13873711886888368863ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 12165998247999836627ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 9694854889586758145ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = 11975257721783306136ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = 7485203691672523827ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = 6378196430683544936ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = 12237508819287691098ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1755920093768028852ULL : 3314954747834421185ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 9879578202672762278ULL : 17344994937840637738ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = 2763462326643485841ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = 16547995568107176164ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 11351346416407911475ULL : 14215870424593616656ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
