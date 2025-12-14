#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7853052827567968869LL;
unsigned int var_1 = 3228723701U;
long long int var_2 = 2041535958776317178LL;
unsigned short var_5 = (unsigned short)23377;
long long int var_9 = 8844285031047771404LL;
unsigned short var_10 = (unsigned short)34599;
int zero = 0;
signed char var_11 = (signed char)-50;
signed char var_12 = (signed char)-15;
unsigned long long int var_13 = 6214845221666260919ULL;
unsigned int var_14 = 515233633U;
signed char var_15 = (signed char)16;
unsigned long long int var_16 = 1527095127848320528ULL;
unsigned short arr_0 [17] ;
unsigned short arr_3 [17] ;
unsigned short arr_4 [17] [17] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)23816;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)14012;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)31592;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1258927907U : 352450883U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
