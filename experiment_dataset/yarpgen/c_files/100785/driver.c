#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-25237;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)11193;
int var_5 = 484427535;
unsigned long long int var_6 = 13256235212378990887ULL;
unsigned char var_7 = (unsigned char)181;
signed char var_9 = (signed char)-82;
long long int var_11 = 9216720946960273009LL;
unsigned int var_12 = 2075412036U;
long long int var_16 = 7405393473389368904LL;
int zero = 0;
short var_17 = (short)1731;
unsigned int var_18 = 2302541470U;
unsigned short var_19 = (unsigned short)36927;
unsigned char var_20 = (unsigned char)73;
unsigned char arr_1 [12] ;
unsigned short arr_2 [12] ;
short arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5804 : (unsigned short)50788;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)17451 : (short)-27229;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
