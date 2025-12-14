#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7277;
int var_1 = -722965601;
unsigned long long int var_5 = 12514794841707450367ULL;
short var_10 = (short)7313;
int zero = 0;
int var_14 = -1284406839;
long long int var_15 = -2898658818155215113LL;
unsigned long long int var_16 = 2685883411124432206ULL;
short var_17 = (short)29071;
unsigned long long int var_18 = 4965404010273413986ULL;
signed char var_19 = (signed char)106;
long long int arr_2 [13] [13] ;
signed char arr_8 [21] ;
unsigned char arr_9 [21] ;
int arr_13 [21] ;
signed char arr_15 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 436695481343674165LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = -620720482;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)127;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
