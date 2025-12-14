#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5140832399624682890ULL;
unsigned long long int var_1 = 665307368589234787ULL;
unsigned long long int var_3 = 6167097499751692377ULL;
unsigned long long int var_10 = 6379685061912293987ULL;
unsigned long long int var_11 = 358026227219694009ULL;
unsigned long long int var_15 = 10494520363781820066ULL;
int zero = 0;
unsigned long long int var_17 = 8757893530313848672ULL;
unsigned long long int var_18 = 6170330276106555134ULL;
unsigned long long int var_19 = 11048345240243040396ULL;
unsigned long long int var_20 = 16122380725711573898ULL;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_3 [22] [22] [22] ;
unsigned long long int arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 3361712116588016868ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 5791664485536698288ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 1526921356407351163ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
