#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5414133753537595217LL;
unsigned long long int var_4 = 17218099626811885050ULL;
unsigned char var_8 = (unsigned char)196;
unsigned long long int var_10 = 1244581240786383475ULL;
unsigned int var_12 = 2179475352U;
unsigned char var_13 = (unsigned char)196;
unsigned long long int var_14 = 3769122691466888575ULL;
unsigned long long int var_16 = 6128227978993034648ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)82;
unsigned int var_19 = 1119842161U;
long long int var_20 = -7776735570160765744LL;
long long int var_21 = -7124643238443041842LL;
unsigned char var_22 = (unsigned char)199;
unsigned int var_23 = 2071447815U;
unsigned char var_24 = (unsigned char)78;
long long int var_25 = 6647580688418235658LL;
unsigned char var_26 = (unsigned char)236;
unsigned char var_27 = (unsigned char)29;
unsigned int arr_0 [23] ;
unsigned int arr_3 [23] ;
unsigned long long int arr_9 [25] [25] ;
long long int arr_15 [25] [25] [25] ;
unsigned char arr_4 [23] ;
unsigned int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 953496347U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 686803050U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 12200290745784330585ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1218538452684126584LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 397400551U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
