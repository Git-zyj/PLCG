#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3562446245U;
unsigned int var_2 = 327768090U;
_Bool var_3 = (_Bool)0;
unsigned int var_10 = 1722006772U;
int var_11 = -1631675217;
long long int var_12 = -1134103345869817336LL;
signed char var_14 = (signed char)-34;
unsigned long long int var_15 = 14674710095442386078ULL;
int zero = 0;
long long int var_16 = -3976143465913331767LL;
signed char var_17 = (signed char)24;
unsigned int var_18 = 737688938U;
unsigned long long int var_19 = 3049179958057372510ULL;
short var_20 = (short)20679;
unsigned long long int var_21 = 13017123181130670025ULL;
unsigned long long int var_22 = 9481970945552172142ULL;
unsigned int var_23 = 2835580298U;
long long int var_24 = 8103735453772856654LL;
int var_25 = -437451109;
signed char var_26 = (signed char)-126;
unsigned int arr_0 [10] ;
long long int arr_1 [10] ;
_Bool arr_2 [10] ;
long long int arr_6 [24] [24] ;
long long int arr_7 [24] ;
signed char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4004877760U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 7229341787351752092LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 5199843418335486494LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -8173425043415785820LL : 2038119775345199587LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)68 : (signed char)-58;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
