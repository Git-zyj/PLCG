#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
unsigned long long int var_1 = 16349831221957989035ULL;
unsigned long long int var_2 = 7886463410021046826ULL;
unsigned long long int var_3 = 11687191961611970195ULL;
unsigned short var_4 = (unsigned short)58683;
unsigned short var_6 = (unsigned short)17446;
unsigned long long int var_9 = 15811314531287049479ULL;
unsigned char var_10 = (unsigned char)254;
unsigned long long int var_12 = 267608488418857293ULL;
unsigned short var_13 = (unsigned short)23243;
unsigned long long int var_15 = 1876161762958996325ULL;
unsigned long long int var_16 = 9104612611487752170ULL;
unsigned long long int var_18 = 1116171412844214597ULL;
unsigned long long int var_19 = 15760870107151561352ULL;
int zero = 0;
unsigned long long int var_20 = 14259466522462447824ULL;
unsigned short var_21 = (unsigned short)29230;
unsigned long long int var_22 = 16054161574358726977ULL;
unsigned long long int var_23 = 14460244096332363119ULL;
unsigned long long int var_24 = 5087164940362360961ULL;
unsigned long long int var_25 = 15939486783956966152ULL;
unsigned char var_26 = (unsigned char)168;
unsigned long long int var_27 = 9542319721606691761ULL;
unsigned long long int var_28 = 17029311756877080865ULL;
unsigned long long int arr_1 [18] ;
unsigned char arr_3 [18] [18] ;
unsigned long long int arr_7 [21] ;
unsigned long long int arr_9 [21] [21] ;
unsigned long long int arr_10 [21] ;
unsigned long long int arr_11 [21] [21] [21] ;
unsigned long long int arr_12 [21] [21] [21] ;
unsigned short arr_13 [21] [21] ;
unsigned long long int arr_21 [21] [21] [21] [21] ;
unsigned long long int arr_4 [18] [18] ;
unsigned char arr_5 [18] ;
unsigned short arr_6 [18] ;
unsigned long long int arr_17 [21] [21] ;
unsigned long long int arr_22 [21] [21] [21] [21] ;
unsigned long long int arr_26 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 6632614959062495288ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 9867634321572085276ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 6405499770760573205ULL : 344827379289714545ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 6399312522634249387ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 2107008256487964125ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 279266043696837161ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)8241 : (unsigned short)12726;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3724753390274270420ULL : 15871101719375424188ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 663475322701207270ULL : 9811667076185526639ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)188 : (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34162 : (unsigned short)51825;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 13099589573411910521ULL : 13525508171422909883ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15880784041102946013ULL : 668926422158575654ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? 2505387266403674240ULL : 12048233426944218529ULL;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
