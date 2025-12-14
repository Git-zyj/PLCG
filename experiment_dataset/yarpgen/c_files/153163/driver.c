#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6026257728920051442ULL;
long long int var_1 = 2548098451501983605LL;
short var_3 = (short)26358;
long long int var_4 = -1097085545413961823LL;
unsigned short var_5 = (unsigned short)62373;
long long int var_7 = -9102638642168796227LL;
unsigned short var_8 = (unsigned short)51519;
short var_9 = (short)-10567;
int var_10 = -718727031;
unsigned char var_11 = (unsigned char)139;
unsigned long long int var_12 = 14916978338403766208ULL;
int zero = 0;
unsigned long long int var_13 = 9713864019659972120ULL;
long long int var_14 = 3442036829326992799LL;
unsigned long long int var_15 = 12307690538799641579ULL;
short var_16 = (short)-11652;
unsigned long long int var_17 = 7101547856917823190ULL;
signed char var_18 = (signed char)-26;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)35066;
int var_21 = 377511374;
short var_22 = (short)27918;
signed char arr_0 [23] [23] ;
signed char arr_1 [23] ;
short arr_6 [23] ;
unsigned short arr_7 [23] [23] ;
_Bool arr_10 [23] [23] [23] ;
unsigned long long int arr_15 [23] [23] [23] ;
unsigned long long int arr_2 [23] ;
int arr_3 [23] [23] ;
long long int arr_4 [23] [23] ;
signed char arr_8 [23] ;
signed char arr_13 [23] [23] [23] ;
long long int arr_16 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (short)-10544;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)8290;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 4112405685260881967ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 579169029919616337ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -1618073113;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -5305259855251046209LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-25 : (signed char)-14;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? 4510160761133122720LL : 4467267174960284857LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
