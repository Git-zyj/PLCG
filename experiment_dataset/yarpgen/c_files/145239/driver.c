#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1168367356;
unsigned char var_3 = (unsigned char)198;
unsigned long long int var_5 = 6025852303203700660ULL;
unsigned short var_7 = (unsigned short)35705;
unsigned char var_9 = (unsigned char)232;
unsigned long long int var_10 = 13234426399071943910ULL;
unsigned long long int var_11 = 15653532402605684774ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = -768991761;
unsigned long long int var_14 = 8062047800844915500ULL;
int var_15 = -327754031;
unsigned char var_16 = (unsigned char)149;
unsigned char var_17 = (unsigned char)189;
unsigned char var_18 = (unsigned char)169;
int arr_0 [20] ;
unsigned short arr_2 [20] ;
unsigned char arr_6 [20] [20] [20] ;
int arr_11 [20] [20] ;
long long int arr_12 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 611058114;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)11845;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_11 [i_0] [i_1] = 141474985;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -1882109219029082649LL : 2617849968929539075LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
