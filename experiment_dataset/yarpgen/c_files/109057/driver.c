#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 939916511;
int var_1 = 2081802811;
int var_2 = 450296528;
long long int var_6 = -7273180505529090286LL;
int var_7 = 1591335492;
unsigned long long int var_10 = 4456287814961057287ULL;
unsigned long long int var_14 = 7202672237254617078ULL;
int var_15 = 1558833823;
int var_16 = -1745370995;
long long int var_17 = 6485562694561673628LL;
int zero = 0;
long long int var_19 = 7188199159131900667LL;
long long int var_20 = -8801048225377985196LL;
int var_21 = -38603208;
int var_22 = -1261177890;
int var_23 = -1478398841;
unsigned short var_24 = (unsigned short)1397;
unsigned long long int var_25 = 12744341340341246065ULL;
unsigned long long int var_26 = 6370386254567183488ULL;
long long int var_27 = -1368880532739453698LL;
unsigned short var_28 = (unsigned short)52158;
unsigned long long int arr_1 [15] ;
unsigned short arr_3 [15] [15] ;
unsigned long long int arr_4 [15] ;
unsigned long long int arr_6 [15] ;
unsigned short arr_10 [15] [15] [15] [15] [15] ;
unsigned long long int arr_11 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 15925478466684186130ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)63143;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1162448487998825665ULL : 16830868367084158399ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 8362741343053776340ULL : 943417628516525192ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned short)39494 : (unsigned short)65430;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6398126155492393424ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
