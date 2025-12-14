#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23933;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 2197212289U;
long long int var_7 = 6040727813982101502LL;
_Bool var_9 = (_Bool)0;
short var_12 = (short)10728;
long long int var_15 = -1878808032599016234LL;
unsigned short var_16 = (unsigned short)21481;
int zero = 0;
unsigned long long int var_20 = 1392163888524386467ULL;
unsigned short var_21 = (unsigned short)50497;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-106;
unsigned long long int var_24 = 7940808268594496391ULL;
unsigned int arr_1 [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned short arr_8 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 4144247584U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1408117123489594786ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)4817 : (unsigned short)12705;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
