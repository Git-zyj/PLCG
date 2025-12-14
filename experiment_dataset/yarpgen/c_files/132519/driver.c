#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -959728003;
unsigned short var_1 = (unsigned short)39491;
int var_3 = -1338074321;
unsigned char var_4 = (unsigned char)65;
unsigned short var_6 = (unsigned short)57580;
unsigned long long int var_8 = 9330932788058513086ULL;
short var_11 = (short)11672;
unsigned int var_12 = 1321534569U;
short var_13 = (short)25643;
int zero = 0;
unsigned char var_14 = (unsigned char)157;
unsigned long long int var_15 = 16312989783816573189ULL;
long long int var_16 = -5094728942630260079LL;
long long int var_17 = 170142252978274304LL;
long long int var_18 = 2994711760332263623LL;
unsigned long long int var_19 = 10684086588505874092ULL;
long long int var_20 = -368081675092448351LL;
int var_21 = 1923860025;
unsigned long long int var_22 = 227714261549985771ULL;
int var_23 = 2113864261;
unsigned long long int var_24 = 3231635641022085817ULL;
short var_25 = (short)4716;
short var_26 = (short)28490;
unsigned char var_27 = (unsigned char)53;
unsigned long long int var_28 = 9925745631598096964ULL;
short var_29 = (short)787;
unsigned long long int var_30 = 12786104478798941393ULL;
long long int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
unsigned int arr_5 [19] [19] ;
long long int arr_9 [16] [16] [16] ;
short arr_19 [25] [25] [25] ;
unsigned long long int arr_22 [25] [25] ;
unsigned char arr_28 [25] ;
unsigned long long int arr_31 [25] ;
unsigned char arr_33 [25] ;
unsigned long long int arr_6 [19] ;
unsigned long long int arr_14 [16] ;
long long int arr_26 [25] [25] [25] ;
long long int arr_27 [25] [25] [25] ;
unsigned long long int arr_35 [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -3559575639432558253LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 14396948739684389086ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3951742936U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7874225690489246556LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-10694 : (short)-25918;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = (i_1 % 2 == 0) ? 7836884922406143163ULL : 18077685342150200497ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = 7339582167518150626ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_33 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 14750444927734606412ULL : 10135561288586354491ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 5733572806545944111ULL : 16378741631358103070ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 953981509780409034LL : 5278804748006307452LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2729558691569199916LL : -4524121054234516013LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11865069896801627703ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_26 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
