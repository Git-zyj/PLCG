#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned char var_1 = (unsigned char)128;
unsigned long long int var_2 = 16887330960050344295ULL;
unsigned char var_4 = (unsigned char)186;
long long int var_5 = -7562882440569737887LL;
unsigned long long int var_6 = 17099031688728428831ULL;
unsigned long long int var_7 = 10530237126359810791ULL;
int var_8 = -1461739716;
int var_9 = 1666907343;
int var_10 = -320730411;
unsigned long long int var_11 = 7960859849857093858ULL;
unsigned long long int var_12 = 14488149829312665183ULL;
long long int var_13 = 7771534487591949774LL;
unsigned long long int var_14 = 6822755908564325589ULL;
unsigned long long int var_15 = 13184119604942544595ULL;
long long int var_17 = 7580687310144914171LL;
int zero = 0;
long long int var_20 = 1484976847654207468LL;
unsigned char var_21 = (unsigned char)6;
long long int var_22 = 7406110887008313655LL;
long long int var_23 = -8565109075998921388LL;
unsigned char var_24 = (unsigned char)81;
unsigned char arr_1 [19] ;
long long int arr_3 [19] [19] [19] ;
unsigned char arr_12 [19] [19] ;
unsigned long long int arr_13 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_14 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -3500008023255882049LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 17242574245076597103ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = (unsigned char)147;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
