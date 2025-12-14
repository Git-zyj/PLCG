#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 709634944U;
_Bool var_1 = (_Bool)1;
short var_6 = (short)7512;
short var_7 = (short)1824;
long long int var_8 = 9109515413719663720LL;
unsigned short var_10 = (unsigned short)57003;
long long int var_11 = 6961943626978193645LL;
int var_14 = 191901969;
int zero = 0;
unsigned int var_16 = 2664866681U;
unsigned int var_17 = 1414834756U;
signed char var_18 = (signed char)77;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 152516409U;
long long int var_21 = -123861152789401856LL;
long long int arr_2 [19] ;
unsigned int arr_4 [19] [19] [19] ;
unsigned int arr_9 [19] [19] ;
unsigned int arr_10 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 8166654985475253938LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3750031170U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 3340573281U : 1019406574U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1496549507U : 3694906740U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
