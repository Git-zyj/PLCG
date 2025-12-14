#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)(-127 - 1);
unsigned long long int var_3 = 11270163328093351678ULL;
unsigned short var_4 = (unsigned short)54984;
int var_7 = -791065982;
unsigned long long int var_8 = 18264608980309568485ULL;
unsigned char var_9 = (unsigned char)13;
unsigned int var_12 = 1012200786U;
unsigned int var_13 = 2550053492U;
int zero = 0;
long long int var_20 = -3936356786610541071LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3267740953U;
unsigned int var_23 = 2119310584U;
signed char var_24 = (signed char)44;
unsigned long long int var_25 = 656104770064345317ULL;
unsigned char var_26 = (unsigned char)126;
unsigned char var_27 = (unsigned char)6;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 6438769710774830951ULL;
unsigned short var_30 = (unsigned short)9053;
unsigned short var_31 = (unsigned short)16330;
long long int var_32 = -2897316157569734896LL;
long long int var_33 = 4324938431938792426LL;
_Bool arr_0 [25] [25] ;
unsigned long long int arr_1 [25] ;
signed char arr_2 [25] [25] ;
unsigned char arr_9 [23] ;
unsigned long long int arr_10 [23] ;
unsigned long long int arr_15 [22] [22] ;
unsigned long long int arr_3 [25] ;
_Bool arr_6 [21] ;
unsigned char arr_17 [22] ;
long long int arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 10880866925512432894ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)23;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 15231162982487955104ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = 5174478185075632275ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4623003640133346293ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (unsigned char)202 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? -1915396916593130683LL : 3330472499700547241LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
