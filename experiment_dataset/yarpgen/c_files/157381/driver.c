#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
long long int var_1 = -8137667180571621119LL;
unsigned long long int var_2 = 1687373917486999596ULL;
short var_3 = (short)3410;
long long int var_4 = 39252493718565257LL;
signed char var_6 = (signed char)57;
unsigned long long int var_8 = 8488080933055773335ULL;
short var_9 = (short)11793;
signed char var_10 = (signed char)-112;
signed char var_11 = (signed char)-19;
signed char var_12 = (signed char)-84;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-11585;
long long int var_15 = 5212599211055006175LL;
int var_16 = -341751453;
signed char var_17 = (signed char)-2;
unsigned char var_18 = (unsigned char)34;
unsigned long long int var_19 = 10477454512116330391ULL;
signed char var_20 = (signed char)-37;
short var_21 = (short)12950;
short var_22 = (short)-17147;
signed char var_23 = (signed char)-81;
signed char var_24 = (signed char)44;
short arr_0 [11] ;
short arr_1 [11] [11] ;
unsigned long long int arr_4 [13] ;
unsigned int arr_6 [13] ;
short arr_12 [13] [13] [13] [13] ;
unsigned long long int arr_2 [11] [11] ;
signed char arr_7 [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] ;
long long int arr_19 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)8308;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-2398 : (short)25222;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 6008435782710428514ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 4286256587U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)3753;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 12572672273141832157ULL : 7291793150291562683ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 12249961684859157126ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = 6719110565531371554LL;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
