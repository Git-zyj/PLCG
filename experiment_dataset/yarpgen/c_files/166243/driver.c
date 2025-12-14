#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1228956893709928938LL;
long long int var_3 = -7239065819374397975LL;
long long int var_10 = -4776373487080908428LL;
long long int var_14 = -3054114594219690812LL;
int zero = 0;
long long int var_18 = 8892868449014682667LL;
unsigned char var_19 = (unsigned char)58;
long long int var_20 = 7077977328822514764LL;
long long int var_21 = 7860869362837581602LL;
unsigned char var_22 = (unsigned char)248;
long long int var_23 = 3785351588006804629LL;
unsigned char var_24 = (unsigned char)124;
long long int arr_0 [24] ;
long long int arr_1 [24] ;
long long int arr_2 [25] ;
long long int arr_3 [25] ;
long long int arr_4 [25] [25] ;
long long int arr_7 [25] ;
long long int arr_12 [23] [23] ;
unsigned char arr_8 [25] [25] [25] ;
long long int arr_9 [25] [25] ;
long long int arr_10 [25] [25] ;
long long int arr_13 [23] ;
long long int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -8308047594101803400LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 9137750665112094303LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 448826508295002916LL : -2043928073283897677LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4741136388284418789LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 7159150728245528047LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 6831947202711767205LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = 1268053261269806002LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)232 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? -4755660171016493913LL : -3132017897563013016LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 6209229951110442132LL : 3142484350386689700LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? -1768470399909844242LL : 6263470058201052967LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 7400657749562922383LL : -4397663952017062020LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
