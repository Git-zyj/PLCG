#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4177130159U;
unsigned long long int var_1 = 16895949627027866239ULL;
unsigned long long int var_4 = 5397282564340041538ULL;
signed char var_5 = (signed char)2;
unsigned int var_6 = 199265123U;
int var_7 = -1935866907;
long long int var_10 = -8060341884687463411LL;
unsigned short var_11 = (unsigned short)24704;
long long int var_12 = -7096970083321742135LL;
unsigned short var_13 = (unsigned short)21004;
unsigned long long int var_16 = 17539201388782080436ULL;
unsigned long long int var_17 = 4404606704328379573ULL;
int var_18 = -2118989729;
int zero = 0;
unsigned long long int var_20 = 6327020696432969260ULL;
int var_21 = 682270675;
int var_22 = -97603258;
unsigned long long int var_23 = 17817710698485700205ULL;
unsigned char var_24 = (unsigned char)8;
unsigned short var_25 = (unsigned short)17346;
short var_26 = (short)29141;
short var_27 = (short)28128;
long long int var_28 = -6018559908590133593LL;
unsigned int var_29 = 3485903666U;
unsigned int var_30 = 3220858230U;
short var_31 = (short)14678;
int var_32 = -1080013079;
int var_33 = 1729563885;
unsigned short var_34 = (unsigned short)59741;
unsigned short var_35 = (unsigned short)14295;
unsigned int var_36 = 3467253147U;
short var_37 = (short)-19747;
short var_38 = (short)-15707;
short var_39 = (short)23284;
_Bool var_40 = (_Bool)1;
unsigned short arr_0 [12] ;
long long int arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned short arr_4 [12] [12] [12] ;
unsigned short arr_6 [12] [12] [12] ;
unsigned char arr_7 [12] [12] [12] ;
short arr_9 [12] [12] [12] [12] ;
int arr_10 [12] ;
unsigned short arr_11 [12] [12] [12] [12] ;
unsigned long long int arr_13 [12] [12] [12] [12] ;
unsigned long long int arr_17 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)19373;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -4856158190947190004LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1180161217U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)63541;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)60984;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)3367;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -439965224;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)51036;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 13010252615459387391ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 3133705650150162212ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
