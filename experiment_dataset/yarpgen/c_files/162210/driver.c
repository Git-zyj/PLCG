#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24341;
unsigned short var_2 = (unsigned short)29701;
long long int var_3 = 4268587025983072513LL;
unsigned short var_5 = (unsigned short)39692;
unsigned short var_6 = (unsigned short)21438;
unsigned short var_7 = (unsigned short)16136;
unsigned short var_9 = (unsigned short)4779;
int zero = 0;
unsigned long long int var_11 = 6447337738817807263ULL;
unsigned long long int var_12 = 14049621145893027992ULL;
long long int var_13 = -5258063510731077336LL;
long long int var_14 = -7575676072636249248LL;
unsigned short var_15 = (unsigned short)14455;
long long int var_16 = 1293448206545795790LL;
unsigned short var_17 = (unsigned short)7681;
long long int var_18 = -993591440576111440LL;
unsigned short var_19 = (unsigned short)25439;
long long int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned short arr_2 [15] ;
unsigned long long int arr_4 [15] ;
unsigned short arr_5 [15] [15] ;
unsigned long long int arr_8 [15] [15] ;
long long int arr_13 [14] ;
long long int arr_6 [15] [15] ;
long long int arr_9 [15] [15] [15] ;
unsigned short arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 1126710811523879870LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)35074;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)47776;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1768216701652016099ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)29055;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = 14247392815227357071ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 7746759291944846405LL : -1953695776820085531LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = -4146752711285918379LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7200633887636213600LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned short)12860;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
