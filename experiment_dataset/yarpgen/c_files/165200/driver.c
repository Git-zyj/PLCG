#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6368251393977016462LL;
long long int var_5 = 6377539894937294874LL;
signed char var_6 = (signed char)109;
unsigned short var_7 = (unsigned short)18699;
signed char var_8 = (signed char)-107;
unsigned long long int var_12 = 6168540659448395258ULL;
unsigned int var_13 = 2673258917U;
int zero = 0;
unsigned int var_15 = 1537290507U;
unsigned long long int var_16 = 13734968262789726259ULL;
long long int var_17 = 800888256641084343LL;
long long int var_18 = -2280838083623200056LL;
unsigned int arr_0 [17] ;
unsigned long long int arr_1 [17] ;
long long int arr_4 [17] ;
unsigned long long int arr_10 [19] ;
unsigned short arr_11 [19] [19] [19] ;
unsigned short arr_2 [17] [17] ;
unsigned int arr_7 [17] ;
unsigned int arr_12 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1252013966U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 14128755274467469106ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -8224974017954842933LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 3553326788811253184ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)35387;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)58944;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 85614090U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? 3571097718U : 1644590649U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
