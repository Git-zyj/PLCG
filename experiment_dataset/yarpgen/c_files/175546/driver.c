#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)84;
unsigned char var_4 = (unsigned char)162;
unsigned char var_7 = (unsigned char)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 13758072484651188231ULL;
signed char var_11 = (signed char)9;
long long int var_13 = 5352018492405347602LL;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-23341;
signed char var_20 = (signed char)-37;
long long int var_21 = 2311111760563028922LL;
unsigned char var_22 = (unsigned char)46;
_Bool arr_1 [16] ;
unsigned int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 4126822173U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
