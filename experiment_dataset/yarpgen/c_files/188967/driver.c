#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)19;
int zero = 0;
unsigned char var_10 = (unsigned char)19;
long long int var_11 = 4629187693418786493LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 1249264118827675913LL;
unsigned char var_14 = (unsigned char)194;
unsigned char var_15 = (unsigned char)108;
short var_16 = (short)-29784;
signed char var_17 = (signed char)-114;
unsigned long long int arr_1 [14] ;
unsigned long long int arr_7 [14] [14] [14] [14] ;
int arr_10 [18] ;
signed char arr_14 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 11322840582169216938ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 12711439377731406586ULL : 15513606175556829377ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = 1456468780;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (signed char)17;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
