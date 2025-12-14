#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14991202819306242210ULL;
unsigned short var_3 = (unsigned short)54520;
unsigned int var_5 = 67237511U;
unsigned short var_8 = (unsigned short)11106;
int var_9 = -1925143662;
_Bool var_10 = (_Bool)0;
int var_11 = 1793112181;
long long int var_12 = 1643707124625347930LL;
int zero = 0;
int var_17 = 1708774653;
unsigned int var_18 = 2449790699U;
unsigned int var_19 = 1008684808U;
short var_20 = (short)18196;
unsigned char var_21 = (unsigned char)105;
unsigned short var_22 = (unsigned short)63908;
unsigned short arr_4 [17] [17] [17] [17] ;
unsigned int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37783;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 210088858U : 4097407549U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
