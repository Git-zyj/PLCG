#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 684707649;
int var_1 = 815798865;
int var_2 = -1137626367;
int var_4 = 800366412;
int var_5 = 741722520;
int var_7 = 496345823;
int var_10 = 547131516;
long long int var_11 = 5978383864074411707LL;
int zero = 0;
int var_12 = 408488136;
long long int var_13 = 7343127086459713487LL;
int var_14 = -2025577589;
int var_15 = 1039765648;
long long int var_16 = 5079953858359959436LL;
long long int var_17 = 2036162789303173168LL;
int var_18 = -765570261;
long long int arr_0 [22] ;
long long int arr_1 [22] ;
int arr_2 [22] ;
long long int arr_3 [22] [22] ;
int arr_6 [22] ;
int arr_9 [22] [22] [22] ;
long long int arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 4845933678410537440LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -6645650784353107102LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -1859873433;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -7874571511330466136LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 1925898182;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 593481352;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 3148464547928595125LL : -8515340755676781388LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
