#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5278028271618670487LL;
unsigned char var_3 = (unsigned char)160;
long long int var_4 = 2045088629555114322LL;
unsigned char var_6 = (unsigned char)193;
unsigned char var_8 = (unsigned char)74;
int zero = 0;
unsigned char var_11 = (unsigned char)38;
long long int var_12 = 6170512827588413858LL;
long long int var_13 = -5304436233187027339LL;
long long int var_14 = 3928249482538569296LL;
unsigned char var_15 = (unsigned char)116;
unsigned char var_16 = (unsigned char)76;
long long int var_17 = 53705404705258074LL;
long long int var_18 = -2328443753723490170LL;
long long int var_19 = 1090892596122723466LL;
long long int arr_1 [16] ;
unsigned char arr_2 [16] ;
unsigned char arr_3 [16] ;
long long int arr_4 [16] ;
long long int arr_5 [18] ;
unsigned char arr_8 [18] [18] ;
long long int arr_9 [18] ;
long long int arr_18 [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4947928581457897450LL : -1449997466133863181LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 7812421212171467050LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 9090233820403933173LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 7472972390280808929LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -250978987334680854LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
