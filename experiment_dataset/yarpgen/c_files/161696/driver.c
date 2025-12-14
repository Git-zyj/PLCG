#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1355657039;
int var_2 = 807834221;
int var_3 = 1144142700;
signed char var_4 = (signed char)101;
int var_5 = 535709536;
unsigned char var_7 = (unsigned char)198;
unsigned char var_8 = (unsigned char)121;
signed char var_9 = (signed char)75;
unsigned char var_10 = (unsigned char)133;
int zero = 0;
unsigned short var_12 = (unsigned short)14295;
int var_13 = -1893781856;
unsigned long long int var_14 = 2455372507707297152ULL;
unsigned char var_15 = (unsigned char)214;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 4678006533227371477ULL;
int var_18 = 1392085716;
unsigned long long int arr_6 [11] [11] ;
unsigned short arr_8 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = 6869913291433126440ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)21730;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
