#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9355161005657341678ULL;
signed char var_6 = (signed char)53;
long long int var_8 = -5699459573995663780LL;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)117;
unsigned char var_11 = (unsigned char)214;
int zero = 0;
long long int var_12 = 8969370968804996093LL;
int var_13 = -1509678147;
unsigned long long int var_14 = 15509162103017649028ULL;
int var_15 = 890086476;
int var_16 = 519368655;
unsigned long long int arr_1 [13] [13] ;
signed char arr_3 [13] [13] ;
unsigned int arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 16241851080419219585ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3702137824U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
