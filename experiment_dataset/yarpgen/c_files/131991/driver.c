#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15133088170682390757ULL;
unsigned long long int var_2 = 7698844661471443005ULL;
signed char var_3 = (signed char)114;
unsigned long long int var_4 = 12794699426808939985ULL;
unsigned int var_6 = 2397755239U;
unsigned int var_7 = 3712737054U;
short var_8 = (short)-25411;
long long int var_11 = 6759044119700024288LL;
short var_12 = (short)-23568;
long long int var_14 = -7128187430643521405LL;
signed char var_15 = (signed char)-120;
int var_16 = -1146212692;
int zero = 0;
long long int var_17 = -5455295845892796464LL;
long long int var_18 = 6362924221854316730LL;
unsigned int var_19 = 1073104559U;
long long int var_20 = -4494636887791212089LL;
signed char var_21 = (signed char)-6;
signed char var_22 = (signed char)89;
unsigned short var_23 = (unsigned short)18852;
long long int var_24 = -3918675107473178797LL;
unsigned short var_25 = (unsigned short)23543;
int var_26 = -792099306;
short var_27 = (short)-29199;
unsigned char var_28 = (unsigned char)162;
long long int arr_2 [14] ;
signed char arr_16 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = -2009071587915551446LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-75;
}

void checksum() {
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
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
