#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7178063846111336645ULL;
unsigned int var_1 = 3335306010U;
unsigned int var_2 = 751210388U;
unsigned long long int var_5 = 16767831230349358588ULL;
unsigned int var_6 = 659460197U;
unsigned int var_8 = 1607986918U;
unsigned long long int var_9 = 9104328235797388830ULL;
unsigned long long int var_10 = 15335379222088365068ULL;
unsigned int var_11 = 2310031318U;
unsigned long long int var_12 = 6696110203743553349ULL;
unsigned int var_13 = 1818789650U;
unsigned int var_14 = 1411906162U;
unsigned int var_15 = 1955146268U;
unsigned long long int var_16 = 1290740799119637540ULL;
unsigned int var_17 = 3496902529U;
int zero = 0;
unsigned int var_18 = 3457043865U;
unsigned long long int var_19 = 4646614575813771319ULL;
unsigned long long int var_20 = 3015633430643641058ULL;
unsigned long long int var_21 = 14842695235997949367ULL;
unsigned long long int var_22 = 18172018701258412038ULL;
unsigned int var_23 = 1508222099U;
unsigned int var_24 = 24377346U;
unsigned long long int var_25 = 13255122944342926781ULL;
unsigned long long int var_26 = 7897416471315406398ULL;
unsigned long long int var_27 = 14668680415347467053ULL;
unsigned int var_28 = 1311830651U;
unsigned int var_29 = 2207507515U;
unsigned long long int var_30 = 13526863747351758255ULL;
unsigned long long int var_31 = 8879103014082480823ULL;
unsigned long long int arr_0 [23] ;
unsigned long long int arr_6 [23] [23] ;
unsigned int arr_8 [23] [23] ;
unsigned long long int arr_9 [23] ;
unsigned long long int arr_13 [17] ;
unsigned long long int arr_28 [17] [17] ;
unsigned int arr_12 [23] ;
unsigned int arr_16 [17] ;
unsigned int arr_24 [17] ;
unsigned int arr_25 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 10970061929359247633ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 7485663169574421025ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 527975100U : 1192650267U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 442977470510631409ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 15028736686869672747ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_28 [i_0] [i_1] = 15276950670797291026ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2599976410U : 148520072U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 1977949575U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 2228820535U : 2277126393U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? 1981541005U : 295170105U;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
