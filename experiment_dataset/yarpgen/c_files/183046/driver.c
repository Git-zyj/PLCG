#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 147724459;
unsigned int var_2 = 3155818540U;
int var_3 = 429374749;
unsigned long long int var_5 = 2635300853859006307ULL;
int var_7 = -1760946524;
signed char var_8 = (signed char)45;
unsigned char var_9 = (unsigned char)181;
int zero = 0;
unsigned int var_10 = 1106965833U;
unsigned long long int var_11 = 9053017861567162316ULL;
unsigned short var_12 = (unsigned short)16145;
long long int var_13 = -4262210410882490484LL;
long long int var_14 = 4572673316552356469LL;
long long int var_15 = 1124067208590489237LL;
unsigned int var_16 = 4193893289U;
long long int var_17 = 357332538331642219LL;
unsigned int var_18 = 1559979700U;
long long int var_19 = 4758012606132988476LL;
signed char arr_1 [19] ;
short arr_4 [12] [12] ;
int arr_15 [12] [12] [12] [12] ;
signed char arr_7 [12] ;
signed char arr_18 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)15549;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1041645412;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-87 : (signed char)98;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
