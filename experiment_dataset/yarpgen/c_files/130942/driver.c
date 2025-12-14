#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)108;
int var_3 = -487364901;
unsigned long long int var_4 = 9166047784461435434ULL;
unsigned char var_7 = (unsigned char)197;
unsigned short var_8 = (unsigned short)9943;
unsigned short var_9 = (unsigned short)21968;
unsigned char var_12 = (unsigned char)123;
int var_13 = -1457612787;
unsigned long long int var_14 = 14116432227258787932ULL;
int zero = 0;
unsigned long long int var_20 = 6695561286327931720ULL;
unsigned long long int var_21 = 688592235897123818ULL;
int var_22 = -1988598384;
int var_23 = 970033635;
int var_24 = -224602103;
int var_25 = -764596473;
unsigned char var_26 = (unsigned char)50;
unsigned short arr_0 [22] ;
int arr_2 [22] [22] ;
unsigned char arr_4 [22] [22] ;
int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)60735;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1894212176;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1273543128;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
