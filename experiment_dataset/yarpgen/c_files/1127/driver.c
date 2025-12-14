#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)202;
short var_4 = (short)22385;
unsigned long long int var_5 = 14148993081385116394ULL;
unsigned char var_7 = (unsigned char)73;
_Bool var_9 = (_Bool)0;
unsigned short var_13 = (unsigned short)1838;
int zero = 0;
unsigned long long int var_16 = 14846938371316019524ULL;
signed char var_17 = (signed char)-85;
unsigned char var_18 = (unsigned char)167;
_Bool arr_1 [11] ;
short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-25317;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
