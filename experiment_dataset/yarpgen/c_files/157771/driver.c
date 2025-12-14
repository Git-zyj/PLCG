#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1192725125657883827ULL;
unsigned int var_2 = 1037655365U;
unsigned int var_4 = 93465151U;
long long int var_5 = -2376850417398370426LL;
unsigned int var_6 = 3633267722U;
short var_7 = (short)-20429;
unsigned int var_8 = 2793838078U;
short var_9 = (short)9312;
unsigned int var_10 = 3091975482U;
unsigned int var_11 = 880060364U;
long long int var_12 = 252026917746396925LL;
unsigned int var_14 = 2349703795U;
int zero = 0;
unsigned int var_15 = 1047295428U;
unsigned int var_16 = 2547920568U;
unsigned long long int var_17 = 1767325543898127298ULL;
unsigned long long int var_18 = 3674428247516273888ULL;
unsigned int var_19 = 1836557988U;
unsigned long long int var_20 = 18338858918308659366ULL;
unsigned int var_21 = 3371070772U;
long long int var_22 = 6564712461713233341LL;
long long int var_23 = 4662047419321376990LL;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 2032075141U;
unsigned int var_26 = 2633503692U;
unsigned long long int var_27 = 13330224572247881953ULL;
short arr_1 [20] ;
unsigned long long int arr_2 [20] [20] ;
long long int arr_3 [20] [20] [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
long long int arr_7 [20] ;
unsigned int arr_9 [20] [20] [20] ;
unsigned int arr_10 [20] ;
short arr_12 [20] [20] ;
_Bool arr_13 [20] [20] [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
unsigned int arr_6 [20] [20] ;
long long int arr_11 [20] ;
long long int arr_15 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-10955;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 159938126181308426ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4766908755530545299LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3793137482935178996ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 4428507920233177938LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3518107314U : 3114575359U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 362050793U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (short)16998;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3029457486392256489ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 2987243365U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 4133300981623054300LL : -6555650135726048808LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -4635781498508843321LL : -4867278292159963616LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
