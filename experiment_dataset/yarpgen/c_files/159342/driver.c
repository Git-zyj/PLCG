#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8935508301288018055LL;
long long int var_1 = 3654088793204401514LL;
unsigned short var_3 = (unsigned short)23991;
unsigned int var_4 = 1899952283U;
unsigned long long int var_8 = 7721583595696015887ULL;
signed char var_11 = (signed char)117;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3524037117U;
short var_15 = (short)17047;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1920431089;
unsigned long long int var_19 = 4991046925065262116ULL;
long long int var_20 = 8591415416207988852LL;
long long int arr_2 [22] ;
int arr_10 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 1596342525740829128LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1950352492 : 1719871269;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
