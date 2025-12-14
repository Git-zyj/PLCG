#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40848;
_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 5770880717935631297ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)18;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)137;
unsigned short var_20 = (unsigned short)31458;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)55404;
_Bool var_23 = (_Bool)0;
long long int var_24 = 7227786220789546106LL;
short var_25 = (short)29474;
short var_26 = (short)17781;
unsigned char arr_1 [11] ;
_Bool arr_8 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
