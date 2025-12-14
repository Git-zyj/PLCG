#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2796329615715414068ULL;
short var_1 = (short)-11177;
long long int var_2 = -694544022138600187LL;
unsigned int var_5 = 4216243134U;
long long int var_6 = -2821301527388725860LL;
unsigned char var_7 = (unsigned char)207;
unsigned int var_8 = 3626589162U;
unsigned short var_10 = (unsigned short)53966;
unsigned int var_11 = 196228028U;
signed char var_14 = (signed char)73;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1577815318;
unsigned long long int var_21 = 12760994778488264029ULL;
unsigned long long int var_22 = 12282269959947556485ULL;
signed char var_23 = (signed char)124;
int var_24 = 1895580545;
int var_25 = 1971131359;
short var_26 = (short)1887;
int var_27 = -935977945;
unsigned long long int var_28 = 10683574158555955199ULL;
unsigned long long int var_29 = 11256641758126070147ULL;
int var_30 = 184711269;
int var_31 = 1991707445;
short arr_0 [20] ;
int arr_4 [22] [22] ;
unsigned int arr_5 [22] ;
unsigned int arr_9 [22] [22] [22] ;
unsigned int arr_11 [22] [22] ;
unsigned short arr_12 [22] [22] [22] ;
unsigned long long int arr_2 [20] ;
unsigned int arr_3 [20] [20] ;
short arr_8 [22] ;
int arr_20 [16] ;
int arr_21 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)6415 : (short)30699;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 654857309;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 1370096639U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1342484704U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 12794476U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)61140;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5078429366197493051ULL : 3180854917035797528ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 3835651880U : 2833583700U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)18515;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = 736998807;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = 800924441;
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
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
