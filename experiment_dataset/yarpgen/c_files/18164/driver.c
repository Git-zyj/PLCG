#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1474285073U;
unsigned int var_1 = 1272327073U;
unsigned int var_2 = 3836677283U;
unsigned int var_4 = 1145861020U;
unsigned int var_5 = 628810778U;
unsigned int var_6 = 3482124949U;
unsigned int var_8 = 209134722U;
unsigned long long int var_9 = 13945959248175188255ULL;
unsigned long long int var_11 = 3501110826696059878ULL;
int zero = 0;
unsigned long long int var_12 = 9336130704680516852ULL;
unsigned long long int var_13 = 11022453301773664603ULL;
unsigned int var_14 = 899083278U;
unsigned int var_15 = 3820607861U;
unsigned long long int var_16 = 352171289775660799ULL;
unsigned long long int var_17 = 12760998547330276301ULL;
unsigned long long int var_18 = 4310981755586303112ULL;
unsigned int var_19 = 545122330U;
unsigned int var_20 = 2326157706U;
unsigned long long int var_21 = 4759539794475505300ULL;
unsigned long long int var_22 = 10723377794362375337ULL;
unsigned long long int var_23 = 9189719064401889611ULL;
unsigned int var_24 = 3665058380U;
unsigned int var_25 = 3839216672U;
unsigned long long int var_26 = 13144522963931576771ULL;
unsigned int var_27 = 429993614U;
unsigned long long int arr_1 [21] ;
unsigned int arr_2 [21] ;
unsigned long long int arr_4 [21] [21] [21] ;
unsigned int arr_5 [21] [21] [21] [21] ;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned int arr_8 [21] [21] [21] ;
unsigned long long int arr_10 [21] [21] [21] [21] ;
unsigned long long int arr_11 [21] ;
unsigned int arr_13 [21] ;
unsigned long long int arr_14 [21] [21] [21] ;
unsigned int arr_16 [21] [21] [21] [21] ;
unsigned long long int arr_6 [21] [21] [21] [21] ;
unsigned int arr_18 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 6664088096723396274ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 648070646U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 109589613582438603ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 90962122U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 10981891547734791042ULL : 13777099223019167944ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4186522085U : 384810882U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 10575953286513397058ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 3142533813200269402ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 400835255U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 8795187216282101224ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 2765267364U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 4299736988201009930ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2734872035U : 1299825256U;
}

void checksum() {
    hash(&seed, var_12);
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
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
