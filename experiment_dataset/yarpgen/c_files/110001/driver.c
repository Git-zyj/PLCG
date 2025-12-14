#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11234827640278544268ULL;
unsigned long long int var_1 = 2089001044168871006ULL;
unsigned char var_2 = (unsigned char)47;
long long int var_3 = -7185811212330639409LL;
int var_4 = 441590863;
unsigned short var_5 = (unsigned short)21411;
unsigned long long int var_6 = 5641748997368898385ULL;
long long int var_7 = -800802301326240409LL;
int var_8 = -1388289221;
int zero = 0;
signed char var_10 = (signed char)-122;
_Bool var_11 = (_Bool)0;
int var_12 = -1327568041;
unsigned int var_13 = 3371176382U;
unsigned long long int var_14 = 5629520563738625293ULL;
int var_15 = 6188182;
unsigned char var_16 = (unsigned char)119;
unsigned long long int var_17 = 2981326137949932753ULL;
long long int var_18 = 7730161663810567587LL;
int var_19 = 1539414632;
short arr_0 [19] ;
long long int arr_1 [19] ;
short arr_4 [19] ;
unsigned char arr_2 [19] ;
long long int arr_3 [19] ;
unsigned char arr_8 [19] ;
int arr_9 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-14277;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 8388947485030959404LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (short)9405;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -8589527658671608189LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)219 : (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? -1861829206 : -1616252246;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
