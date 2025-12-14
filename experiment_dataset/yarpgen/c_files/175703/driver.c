#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)19;
unsigned int var_1 = 2970197682U;
unsigned long long int var_3 = 6022143314651519064ULL;
long long int var_4 = -6672861869305987703LL;
_Bool var_5 = (_Bool)1;
int var_7 = -1598633369;
unsigned long long int var_8 = 14755249597895685596ULL;
unsigned long long int var_9 = 5898141372905865686ULL;
int var_10 = 490720260;
int zero = 0;
unsigned long long int var_11 = 18015657842781705195ULL;
long long int var_12 = 2771108057221754119LL;
int var_13 = 1887680405;
unsigned short var_14 = (unsigned short)23691;
int var_15 = 1388217425;
unsigned char var_16 = (unsigned char)131;
unsigned int arr_3 [17] ;
_Bool arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 4149720590U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
