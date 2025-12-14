#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4201264725760967989ULL;
unsigned long long int var_1 = 10207298931514055089ULL;
unsigned long long int var_2 = 3776771947999261163ULL;
unsigned long long int var_3 = 15824903275295705333ULL;
unsigned long long int var_4 = 5570906820910123399ULL;
unsigned long long int var_5 = 4160188154653548318ULL;
unsigned int var_6 = 970374113U;
unsigned long long int var_7 = 4404213126263535933ULL;
unsigned char var_8 = (unsigned char)192;
short var_9 = (short)-24802;
int var_10 = -157512592;
int zero = 0;
int var_11 = 1612466322;
unsigned char var_12 = (unsigned char)26;
int var_13 = -57543782;
unsigned long long int var_14 = 8112838314786739852ULL;
unsigned long long int var_15 = 4166972438051529792ULL;
unsigned long long int var_16 = 6878335636383905075ULL;
unsigned char var_17 = (unsigned char)156;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 4862044429522978594ULL;
int var_20 = 2012687164;
unsigned int var_21 = 4130815679U;
unsigned short arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
long long int arr_2 [25] ;
unsigned long long int arr_3 [25] [25] [25] ;
unsigned char arr_6 [25] ;
_Bool arr_7 [25] [25] ;
signed char arr_8 [25] [25] [25] ;
unsigned long long int arr_10 [25] [25] [25] [25] ;
long long int arr_13 [25] [25] [25] ;
unsigned int arr_16 [25] ;
unsigned long long int arr_5 [25] ;
short arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)46780;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 9002629279661204976ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -6322679930251858342LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9574561928947131604ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-60 : (signed char)76;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 13518566919142052598ULL : 6552833218501918811ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -8318057834618585240LL : -8373076455282252534LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = 254456805U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6982989797481394529ULL : 9745794109117208980ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (short)-13000 : (short)-28000;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
