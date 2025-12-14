#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -917377429;
_Bool var_4 = (_Bool)0;
long long int var_9 = 6733501710530787569LL;
int zero = 0;
unsigned char var_13 = (unsigned char)106;
unsigned short var_14 = (unsigned short)53690;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)16994;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)50;
unsigned short arr_3 [22] [22] ;
unsigned long long int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)58508;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 13288480437647361090ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
