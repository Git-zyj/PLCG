#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5119013745887502661LL;
signed char var_1 = (signed char)-94;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 787827336079239689ULL;
long long int var_4 = -3802699714839716214LL;
signed char var_5 = (signed char)-29;
unsigned int var_8 = 3924216749U;
signed char var_10 = (signed char)27;
int zero = 0;
short var_12 = (short)15759;
signed char var_13 = (signed char)-57;
unsigned long long int var_14 = 5912101240470717128ULL;
unsigned char var_15 = (unsigned char)43;
int var_16 = 122769397;
long long int var_17 = -8970349128205865788LL;
unsigned long long int var_18 = 10541853278854999791ULL;
int var_19 = 1950971702;
short var_20 = (short)23142;
unsigned char var_21 = (unsigned char)167;
long long int var_22 = -2590546816525056888LL;
unsigned long long int var_23 = 163077826828053607ULL;
long long int var_24 = 8663644125597086491LL;
_Bool arr_0 [15] ;
_Bool arr_3 [15] ;
long long int arr_7 [19] ;
unsigned long long int arr_8 [21] ;
unsigned short arr_9 [21] ;
short arr_12 [18] [18] ;
unsigned long long int arr_14 [18] [18] [18] [18] ;
short arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 7629133980495430157LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 13642095881665090449ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)43345;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (short)-4380;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 13427353800172828642ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)17447 : (short)-6709;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
