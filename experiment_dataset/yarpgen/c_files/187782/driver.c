#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1474576664;
unsigned int var_14 = 286615775U;
short var_17 = (short)15256;
int zero = 0;
unsigned char var_19 = (unsigned char)173;
int var_20 = 1206918233;
short var_21 = (short)5705;
unsigned long long int var_22 = 18414595584571091109ULL;
unsigned int var_23 = 2532297275U;
unsigned short var_24 = (unsigned short)27143;
unsigned long long int var_25 = 15834339386808221824ULL;
int var_26 = 2082010259;
int var_27 = 1446627712;
unsigned int var_28 = 168199646U;
unsigned int var_29 = 1316559889U;
short arr_0 [19] ;
unsigned char arr_1 [19] ;
int arr_4 [19] [19] [19] ;
int arr_7 [10] [10] ;
short arr_8 [10] [10] ;
unsigned int arr_14 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)19192;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 256296042;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -1004387995;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (short)20181;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 2850385261U : 3989269963U;
}

void checksum() {
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
