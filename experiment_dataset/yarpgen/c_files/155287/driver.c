#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
unsigned long long int var_5 = 17530911773060760709ULL;
int var_7 = 195828975;
unsigned char var_8 = (unsigned char)93;
int var_11 = 532392368;
unsigned char var_12 = (unsigned char)42;
unsigned char var_13 = (unsigned char)108;
int var_14 = 2136004940;
int var_15 = 975283402;
int zero = 0;
unsigned long long int var_16 = 104382076236633288ULL;
unsigned long long int var_17 = 5465673056440260580ULL;
unsigned char var_18 = (unsigned char)209;
int var_19 = -1956085706;
unsigned char var_20 = (unsigned char)43;
int var_21 = -7865431;
unsigned char var_22 = (unsigned char)144;
unsigned long long int var_23 = 10827855788451980812ULL;
int var_24 = 1786638365;
unsigned long long int var_25 = 3120611977014868705ULL;
unsigned char var_26 = (unsigned char)126;
int var_27 = 119625023;
unsigned long long int arr_0 [10] ;
int arr_1 [10] ;
int arr_4 [10] [10] ;
int arr_12 [24] ;
unsigned char arr_13 [24] ;
unsigned char arr_15 [24] [24] [24] ;
unsigned long long int arr_16 [24] [24] [24] ;
int arr_17 [24] [24] ;
unsigned char arr_18 [24] ;
int arr_20 [24] [24] [24] [24] ;
int arr_23 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 14293370755044512519ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1270376003;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 133083274;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = -167549284;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)32 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 13059362339835526167ULL : 13199748022424324625ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = -2103838868;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_18 [i_0] = (unsigned char)84;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1508766753 : 1797303423;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1496758433 : 1490811502;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
