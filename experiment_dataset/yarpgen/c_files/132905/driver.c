#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6455445930300538861ULL;
short var_1 = (short)-2011;
unsigned long long int var_4 = 9496237721463833662ULL;
unsigned long long int var_5 = 15572610244150306562ULL;
unsigned char var_7 = (unsigned char)22;
unsigned char var_9 = (unsigned char)31;
unsigned short var_10 = (unsigned short)33566;
unsigned long long int var_12 = 7617876498367669746ULL;
int zero = 0;
unsigned long long int var_14 = 1551027297339715974ULL;
unsigned int var_15 = 4101502606U;
unsigned short var_16 = (unsigned short)6578;
unsigned short var_17 = (unsigned short)34311;
unsigned long long int arr_1 [24] [24] ;
_Bool arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 15868169585360815293ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
