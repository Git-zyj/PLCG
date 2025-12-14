#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2399459134501820501ULL;
unsigned char var_1 = (unsigned char)8;
unsigned char var_2 = (unsigned char)73;
unsigned long long int var_3 = 4680901533398718872ULL;
unsigned long long int var_4 = 2970130961269175454ULL;
unsigned long long int var_6 = 1347140243915918268ULL;
unsigned char var_7 = (unsigned char)186;
unsigned char var_9 = (unsigned char)96;
unsigned long long int var_10 = 4609719836870329025ULL;
unsigned long long int var_11 = 12636144185847217961ULL;
unsigned long long int var_12 = 220222065383297170ULL;
unsigned long long int var_13 = 6066241353232282208ULL;
unsigned char var_14 = (unsigned char)204;
unsigned char var_15 = (unsigned char)64;
unsigned long long int var_18 = 4264333671989098713ULL;
int zero = 0;
unsigned long long int var_19 = 14462118924579145229ULL;
unsigned char var_20 = (unsigned char)170;
unsigned char var_21 = (unsigned char)199;
unsigned long long int var_22 = 15162462164146930466ULL;
unsigned char var_23 = (unsigned char)10;
unsigned long long int var_24 = 1459558253899548869ULL;
unsigned char var_25 = (unsigned char)183;
unsigned long long int var_26 = 16145728438364911146ULL;
unsigned char var_27 = (unsigned char)8;
unsigned long long int var_28 = 13851685068659643250ULL;
unsigned char var_29 = (unsigned char)111;
unsigned long long int var_30 = 6630885893109241004ULL;
unsigned char arr_2 [10] ;
unsigned long long int arr_3 [10] [10] [10] ;
unsigned long long int arr_4 [10] [10] ;
unsigned char arr_10 [10] ;
unsigned char arr_13 [10] [10] ;
unsigned long long int arr_14 [10] [10] [10] [10] ;
unsigned long long int arr_15 [10] [10] [10] ;
unsigned long long int arr_17 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 17786327464491074348ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 12768327389431772730ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 7429256818907041370ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 1211817755965890670ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = 524517500083346422ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
