#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10018692428393405620ULL;
unsigned long long int var_2 = 16385965257555119129ULL;
unsigned long long int var_3 = 7051327697911475830ULL;
unsigned long long int var_4 = 17078735559970450563ULL;
unsigned long long int var_5 = 18277188363458114309ULL;
unsigned long long int var_7 = 8681742392116918469ULL;
unsigned long long int var_8 = 12420349593613945917ULL;
unsigned long long int var_9 = 6517909969779735791ULL;
unsigned long long int var_10 = 13146128930729147875ULL;
int zero = 0;
unsigned long long int var_11 = 18416223786677850004ULL;
unsigned long long int var_12 = 11755902816985201365ULL;
unsigned long long int var_13 = 14930258132669526094ULL;
unsigned long long int var_14 = 16981972083193666437ULL;
unsigned long long int var_15 = 1503658505526503097ULL;
unsigned long long int var_16 = 17189875348536450983ULL;
unsigned long long int var_17 = 56054550797656311ULL;
unsigned long long int arr_0 [21] [21] ;
unsigned long long int arr_2 [21] ;
unsigned long long int arr_3 [21] [21] ;
unsigned long long int arr_4 [21] [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
unsigned long long int arr_6 [21] ;
unsigned long long int arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 7115750295899463411ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 502177568825013056ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 4543109213610749644ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 2966429650441377213ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2464686086779507345ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 14919897724750976377ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 7311928389675224506ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
