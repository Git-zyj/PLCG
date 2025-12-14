#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
int var_1 = 612081087;
int var_2 = -1371777877;
unsigned long long int var_4 = 4317196750303971157ULL;
short var_9 = (short)22626;
unsigned short var_10 = (unsigned short)13520;
unsigned long long int var_11 = 913227991593085746ULL;
int zero = 0;
unsigned long long int var_13 = 15117878604261412248ULL;
unsigned short var_14 = (unsigned short)59623;
int var_15 = 1977387678;
int var_16 = 1721106241;
short var_17 = (short)18757;
int var_18 = 373442509;
unsigned char var_19 = (unsigned char)108;
unsigned char var_20 = (unsigned char)207;
int var_21 = 1093304873;
unsigned short var_22 = (unsigned short)50013;
int var_23 = -95981365;
unsigned short var_24 = (unsigned short)50467;
int var_25 = -466076875;
unsigned short var_26 = (unsigned short)57036;
unsigned long long int arr_2 [16] ;
int arr_3 [16] [16] ;
short arr_4 [13] ;
int arr_6 [13] ;
int arr_12 [13] [13] [13] [13] [13] ;
short arr_13 [13] [13] [13] [13] [13] [13] ;
int arr_14 [13] [13] [13] [13] ;
int arr_15 [13] [13] [13] [13] [13] ;
int arr_10 [13] [13] [13] ;
short arr_16 [13] ;
unsigned long long int arr_17 [13] ;
int arr_23 [13] ;
int arr_27 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4730747872313816603ULL : 6112594815555835973ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 794006562;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)15245;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -1169704074;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 256592662;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)7744 : (short)21884;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -1933749490;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = -723269814;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 284476735 : 1703877859;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)-27870 : (short)-28500;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 1493621646261019336ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = -898856735;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_27 [i_0] = -1004309187;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
