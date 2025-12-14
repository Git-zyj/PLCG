#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 934291596935631708ULL;
long long int var_5 = 7048911252001059406LL;
long long int var_7 = -3754828285368041901LL;
long long int var_8 = 5957319336029053448LL;
unsigned long long int var_9 = 14358181795927159183ULL;
int var_11 = -358658699;
long long int var_12 = 4861681186061963964LL;
long long int var_15 = -8028398705644177699LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 796670020248677841ULL;
short var_19 = (short)-374;
short var_20 = (short)-26086;
long long int var_21 = -3590559195545648070LL;
unsigned char var_22 = (unsigned char)73;
long long int var_23 = -7587660385164542931LL;
unsigned long long int var_24 = 6912523777194422257ULL;
unsigned char arr_0 [23] [23] ;
long long int arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -1568193634981695413LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 9737123654892821591ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)149;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
