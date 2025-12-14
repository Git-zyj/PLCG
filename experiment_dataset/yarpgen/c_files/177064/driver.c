#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)143;
long long int var_2 = 7532117883688018528LL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-6022;
unsigned long long int var_6 = 15669672357255815708ULL;
long long int var_8 = -5840166312759841409LL;
int var_9 = -1751057235;
unsigned int var_11 = 3453746297U;
int zero = 0;
unsigned short var_12 = (unsigned short)39670;
unsigned long long int var_13 = 7369364130696557157ULL;
short var_14 = (short)-13390;
long long int var_15 = 6155357685576091982LL;
unsigned long long int var_16 = 15646975568997984044ULL;
signed char var_17 = (signed char)103;
_Bool arr_1 [19] [19] ;
unsigned int arr_7 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 3524578037U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
