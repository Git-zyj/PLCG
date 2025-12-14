#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -753915512;
int var_2 = -395163903;
int var_5 = 1168051289;
int var_9 = 1245109574;
int zero = 0;
unsigned short var_13 = (unsigned short)42851;
unsigned int var_14 = 2707056180U;
int var_15 = -1792380456;
unsigned int var_16 = 4230579820U;
long long int var_17 = 7960105065131578187LL;
long long int var_18 = -7384630545466458396LL;
unsigned char var_19 = (unsigned char)6;
long long int var_20 = -2852398821091806416LL;
short var_21 = (short)6224;
unsigned int var_22 = 188765061U;
unsigned long long int var_23 = 5160389473985965252ULL;
int var_24 = 1719150282;
unsigned short arr_0 [14] [14] ;
int arr_1 [14] ;
short arr_5 [14] [14] [14] ;
int arr_8 [14] [14] [14] [14] ;
unsigned int arr_11 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)5246;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -78610872;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)18439;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1696137121 : -1163686646;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 2098505134U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
