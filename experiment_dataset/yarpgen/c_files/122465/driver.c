#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4525818932960657958LL;
long long int var_1 = 4305435444918459716LL;
signed char var_2 = (signed char)120;
unsigned long long int var_3 = 6410860050354854447ULL;
unsigned char var_6 = (unsigned char)202;
signed char var_7 = (signed char)40;
unsigned int var_10 = 62274907U;
long long int var_13 = 71277562067491861LL;
long long int var_14 = 8966651445818058912LL;
long long int var_15 = -1591209824430322167LL;
long long int var_16 = -8476976565600005799LL;
int zero = 0;
unsigned char var_17 = (unsigned char)254;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4393525062689901073LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)45;
unsigned char var_22 = (unsigned char)247;
unsigned char arr_6 [18] [18] [18] [18] ;
long long int arr_10 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 8787673151745911175LL : 3880094295965631972LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
