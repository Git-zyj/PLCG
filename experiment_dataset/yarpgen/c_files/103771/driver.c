#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)64;
long long int var_4 = -2972157198178326031LL;
int var_6 = -614706308;
short var_7 = (short)-6192;
long long int var_8 = 6412610173243061332LL;
unsigned char var_9 = (unsigned char)117;
int var_10 = 1146824498;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_12 = (short)875;
unsigned char var_13 = (unsigned char)35;
short var_14 = (short)-15442;
int var_15 = -380847425;
unsigned char var_16 = (unsigned char)19;
unsigned char var_17 = (unsigned char)124;
int var_18 = -333723429;
long long int var_19 = 5160901484604893099LL;
unsigned char arr_10 [18] ;
unsigned char arr_15 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)31;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
