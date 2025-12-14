#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -698409217366472613LL;
long long int var_2 = 2632798609161140604LL;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 3547079282U;
unsigned int var_6 = 1064963356U;
unsigned int var_9 = 3982072401U;
unsigned long long int var_10 = 621166172494528024ULL;
unsigned long long int var_11 = 12304477869828017967ULL;
long long int var_12 = 2517800125905678471LL;
unsigned long long int var_13 = 14153530761527845041ULL;
long long int var_14 = -460880304806066285LL;
int zero = 0;
unsigned long long int var_16 = 12246066690498321620ULL;
unsigned short var_17 = (unsigned short)26658;
long long int var_18 = -1775345289301569392LL;
unsigned int var_19 = 892156186U;
unsigned long long int var_20 = 7914245123854430387ULL;
signed char var_21 = (signed char)-71;
long long int var_22 = -9219183281955367964LL;
int arr_0 [15] ;
unsigned int arr_1 [15] ;
long long int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
int arr_4 [15] ;
unsigned int arr_6 [15] [15] ;
_Bool arr_7 [15] ;
unsigned long long int arr_8 [15] ;
long long int arr_9 [15] ;
unsigned int arr_5 [15] ;
unsigned long long int arr_10 [15] ;
unsigned short arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 245626173;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 3194865471U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -9208168030078258671LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3980534970328829106ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -1483167186;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 2832387540U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 13128999685855104286ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -8689563017216562327LL : -2306941670671194373LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 4037406578U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 14986757496124203106ULL : 15410602996783886053ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49183 : (unsigned short)1505;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
