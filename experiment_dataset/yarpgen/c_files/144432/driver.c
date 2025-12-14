#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -470282891;
long long int var_2 = 1053240765130362206LL;
int var_3 = 1613447663;
long long int var_4 = 7412104212460726592LL;
int var_6 = -22543839;
unsigned short var_8 = (unsigned short)32327;
unsigned int var_9 = 3642881495U;
int var_13 = 490755139;
int zero = 0;
unsigned long long int var_14 = 4616815605532978815ULL;
unsigned int var_15 = 3497077867U;
unsigned int var_16 = 3466801282U;
long long int var_17 = -4192268036563584043LL;
unsigned short var_18 = (unsigned short)53282;
unsigned long long int var_19 = 12646679689370547933ULL;
unsigned long long int arr_1 [13] ;
unsigned long long int arr_5 [21] [21] ;
unsigned int arr_3 [13] ;
int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 11431092922365653291ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 3766336541052168819ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2966047273U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 1269802251;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
