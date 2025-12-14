#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 724598249U;
_Bool var_1 = (_Bool)0;
int var_2 = 999211693;
long long int var_3 = 7613659469091003537LL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1103928341U;
unsigned short var_6 = (unsigned short)61467;
long long int var_7 = -4779292628490628158LL;
short var_8 = (short)-19484;
short var_9 = (short)615;
unsigned char var_10 = (unsigned char)98;
int zero = 0;
unsigned long long int var_11 = 11673151314663424436ULL;
short var_12 = (short)-3671;
unsigned int var_13 = 640458604U;
short var_14 = (short)11424;
long long int var_15 = 7706274227240926006LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)78;
_Bool var_18 = (_Bool)0;
short var_19 = (short)1897;
unsigned int var_20 = 133126810U;
long long int var_21 = 1536676417216296920LL;
short var_22 = (short)-12440;
short var_23 = (short)-14929;
_Bool var_24 = (_Bool)0;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)45316;
unsigned int arr_27 [23] ;
_Bool arr_33 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = 1688096331U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_33 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
