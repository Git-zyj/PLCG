#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
signed char var_3 = (signed char)32;
unsigned char var_4 = (unsigned char)165;
long long int var_5 = 4800138135359021695LL;
unsigned long long int var_7 = 1575713894770235050ULL;
unsigned long long int var_8 = 14886149666121853268ULL;
unsigned char var_10 = (unsigned char)194;
signed char var_11 = (signed char)-86;
unsigned long long int var_12 = 8143431781534143750ULL;
unsigned char var_13 = (unsigned char)9;
signed char var_16 = (signed char)108;
unsigned char var_18 = (unsigned char)124;
int zero = 0;
int var_19 = 1521929799;
unsigned long long int var_20 = 6748988141587669615ULL;
unsigned long long int var_21 = 6350780282964617447ULL;
int var_22 = -600570995;
signed char var_23 = (signed char)44;
unsigned long long int var_24 = 16704452232211502736ULL;
unsigned int var_25 = 2684365023U;
long long int var_26 = 7788958361083204702LL;
unsigned long long int var_27 = 4424519505234715859ULL;
unsigned char var_28 = (unsigned char)31;
unsigned long long int var_29 = 731307335431592934ULL;
unsigned long long int var_30 = 9954636332274176643ULL;
unsigned long long int var_31 = 12136008469583198883ULL;
unsigned int var_32 = 1749179260U;
unsigned char var_33 = (unsigned char)183;
long long int var_34 = 3782407930908037554LL;
signed char var_35 = (signed char)29;
long long int var_36 = -7253790548229298553LL;
unsigned long long int var_37 = 15247679481401619848ULL;
signed char var_38 = (signed char)119;
unsigned long long int var_39 = 17567330436079822984ULL;
signed char arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned int arr_2 [15] ;
unsigned int arr_3 [15] [15] [15] ;
unsigned char arr_4 [15] [15] [15] ;
unsigned char arr_5 [15] [15] ;
unsigned long long int arr_6 [15] [15] [15] [15] ;
unsigned long long int arr_10 [15] [15] [15] ;
unsigned int arr_11 [15] [15] [15] [15] ;
long long int arr_12 [15] [15] [15] [15] ;
unsigned char arr_18 [15] [15] [15] [15] [15] ;
long long int arr_21 [15] [15] [15] [15] ;
unsigned char arr_24 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3732083178U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3756790602U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 10950283795562817541ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 7581958109639417096ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 3849412873U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 2067740871347768126LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1487330060815815103LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)235;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
