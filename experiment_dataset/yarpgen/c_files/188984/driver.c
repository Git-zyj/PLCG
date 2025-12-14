#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1172033464;
int var_3 = 1924235426;
long long int var_4 = 468359373660577922LL;
long long int var_5 = -7082974271444611244LL;
int var_6 = -344469993;
unsigned int var_7 = 1581716388U;
int zero = 0;
int var_14 = 1461650163;
long long int var_15 = 2978463654698049158LL;
int var_16 = 842013438;
long long int var_17 = 2816599756216411558LL;
unsigned int var_18 = 2340356981U;
unsigned int var_19 = 2375608716U;
unsigned int var_20 = 2658695581U;
int var_21 = -1902400280;
unsigned long long int arr_0 [12] [12] ;
short arr_1 [12] [12] ;
long long int arr_2 [12] ;
long long int arr_4 [13] [13] ;
unsigned int arr_5 [13] [13] ;
unsigned short arr_6 [13] ;
long long int arr_7 [13] [13] [13] ;
long long int arr_3 [12] ;
unsigned long long int arr_9 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 17884663961091593723ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)24948;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 4458220932086975830LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 9206380423174736366LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 3004022320U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26789 : (unsigned short)15262;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -7613715199388408269LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 6725672100916331695LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 7485763641741651054ULL : 6708169534992257680ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
