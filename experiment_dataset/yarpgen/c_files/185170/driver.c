#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34074;
long long int var_2 = 8711706605757406587LL;
unsigned short var_3 = (unsigned short)31434;
unsigned char var_5 = (unsigned char)193;
unsigned short var_6 = (unsigned short)58737;
unsigned char var_7 = (unsigned char)123;
unsigned short var_9 = (unsigned short)38685;
long long int var_11 = 6672479322516139788LL;
int zero = 0;
unsigned short var_13 = (unsigned short)5926;
unsigned int var_14 = 3731441137U;
unsigned short var_15 = (unsigned short)24506;
unsigned int var_16 = 925641132U;
long long int var_17 = 3175538519355920025LL;
unsigned short var_18 = (unsigned short)51449;
long long int var_19 = 5482380508921397589LL;
unsigned short var_20 = (unsigned short)18624;
unsigned short var_21 = (unsigned short)41592;
unsigned short arr_0 [18] ;
unsigned char arr_1 [18] ;
unsigned short arr_2 [18] ;
unsigned short arr_5 [18] [18] [18] [18] ;
unsigned short arr_6 [18] [18] [18] ;
long long int arr_8 [18] [18] ;
unsigned short arr_9 [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)21852;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)51888;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)62290;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)17090;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = 5498822840456956021LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)23498;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
